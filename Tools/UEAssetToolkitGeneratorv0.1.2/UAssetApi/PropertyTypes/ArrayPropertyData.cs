﻿namespace UAssetAPI.PropertyTypes;

/// <summary>
/// Describes an array.
/// </summary>
public class ArrayPropertyData : PropertyData<PropertyData[]> // Array
{
    [JsonProperty]
    public FName ArrayType;
    [JsonProperty]
    public StructPropertyData DummyStruct;

    internal bool ShouldSerializeStructsDifferently = true;

    public bool ShouldSerializeDummyStruct()
    {
        return Value.Length == 0;
    }

    public ArrayPropertyData(FName name) : base(name)
    {
        Value = Array.Empty<PropertyData>();
    }

    public ArrayPropertyData()
    {
        Value = Array.Empty<PropertyData>();
    }

    private static readonly FName CurrentPropertyType = new FName("ArrayProperty");
    public override FName PropertyType { get { return CurrentPropertyType; } }

    public override void Read(AssetBinaryReader reader, bool includeHeader, long leng1, long leng2 = 0)
    {
        if (includeHeader)
        {
            ArrayType = reader.ReadFName();
            PropertyGuid = reader.ReadPropertyGuid();
        }

        int numEntries = reader.ReadInt32();
        if (ArrayType.Value.Value == "StructProperty" && ShouldSerializeStructsDifferently)
        {
            var results = new PropertyData[numEntries];

            FName name = this.Name;
            long structLength = 1;
            FName fullType = new FName("Generic");
            Guid structGUID = new Guid();

            if (reader.Ver >= UE4Version.VER_UE4_INNER_ARRAY_TAG_INFO)
            {
                name = reader.ReadFName();
                if (name.Value.Value.Equals("None"))
                {
                    Value = results;
                    return;
                }

                FName thisArrayType = reader.ReadFName();
                if (thisArrayType.Value.Value.Equals("None"))
                {
                    Value = results;
                    return;
                }

                if (thisArrayType.Value.Value != ArrayType.Value.Value) throw new FormatException("Invalid array type: " + thisArrayType.ToString() + " vs " + ArrayType.ToString());

                structLength = reader.ReadInt64(); // length value
                fullType = reader.ReadFName();
                structGUID = new Guid(reader.ReadBytes(16));
                reader.ReadPropertyGuid();
            }

            if (numEntries == 0)
            {
                DummyStruct = new StructPropertyData(name, fullType)
                {
                    StructGUID = structGUID
                };
            }
            else
            {
                for (int i = 0; i < numEntries; i++)
                {
                    var data = new StructPropertyData(name, fullType);
                    data.Offset = reader.BaseStream.Position;
                    data.Read(reader, false, structLength);
                    data.StructGUID = structGUID;
                    results[i] = data;
                }
                DummyStruct = (StructPropertyData)results[0];
            }
            Value = results;
        }
        else
        {   
            if (ArrayType.Value.Value == "StructProperty") {
                if (reader.Asset.SetStructTypeOverride.ContainsKey(Name.Value.Value)) {
                    FName strucType = reader.Asset.SetStructTypeOverride[Name.Value.Value];

                    StructPropertyData[] data = new StructPropertyData[numEntries];
                    if (numEntries > 0) {
                        for (int i = 0; i < numEntries; i++) {
                            data[i] = new StructPropertyData(Name, strucType);
                            data[i].Offset = reader.BaseStream.Position;
                            data[i].Read(reader, false, 1);

                        }
                    }
                    Value = data;
                    return;
                }
            }

            var results = new PropertyData[numEntries];
            if (numEntries > 0)
            {
                int averageSizeEstimate1 = (int)(leng1 / numEntries);
                int averageSizeEstimate2 = (int)((leng1 - 4) / numEntries);
                for (int i = 0; i < numEntries; i++)
                {
                    results[i] = MainSerializer.TypeToClass(ArrayType, new FName(i.ToString(), int.MinValue), reader.Asset);
                    results[i].Offset = reader.BaseStream.Position;
                    if (results[i] is StructPropertyData) ((StructPropertyData)results[i]).StructType = new FName("Generic");
                    results[i].Read(reader, false, averageSizeEstimate1, averageSizeEstimate2);
                }
            }
            Value = results;
        }
    }

    public override int Write(AssetBinaryWriter writer, bool includeHeader)
    {
        if (Value.Length > 0) ArrayType = Value[0].PropertyType;

        if (includeHeader)
        {
            writer.Write(ArrayType);
            writer.WritePropertyGuid(PropertyGuid);
        }

        int here = (int)writer.BaseStream.Position;
        writer.Write(Value.Length);
        if (ArrayType.Value.Value == "StructProperty" && ShouldSerializeStructsDifferently)
        {
            if (Value.Length == 0 && DummyStruct == null) throw new InvalidOperationException("No dummy struct present in an empty StructProperty array, cannot serialize");
            if (Value.Length > 0) DummyStruct = (StructPropertyData)Value[0];

            FName fullType = DummyStruct.StructType;

            int lengthLoc = -1;
            if (writer.Asset.EngineVersion >= UE4Version.VER_UE4_INNER_ARRAY_TAG_INFO)
            {
                writer.Write(DummyStruct.Name);
                writer.Write(new FName("StructProperty"));
                lengthLoc = (int)writer.BaseStream.Position;
                writer.Write((long)0);
                writer.Write(fullType);
                if (writer.Asset.EngineVersion >= UE4Version.VER_UE4_STRUCT_GUID_IN_PROPERTY_TAG) writer.Write(DummyStruct.StructGUID.ToByteArray());
                if (writer.Asset.EngineVersion >= UE4Version.VER_UE4_PROPERTY_GUID_IN_PROPERTY_TAG) writer.Write((byte)0);
            }

            for (int i = 0; i < Value.Length; i++)
            {
                ((StructPropertyData)Value[i]).StructType = fullType;
                Value[i].Offset = writer.BaseStream.Position;
                Value[i].Write(writer, false);
            }

            if (writer.Asset.EngineVersion >= UE4Version.VER_UE4_INNER_ARRAY_TAG_INFO)
            {
                int fullLen = (int)writer.BaseStream.Position - lengthLoc;
                int newLoc = (int)writer.BaseStream.Position;
                writer.Seek(lengthLoc, SeekOrigin.Begin);
                writer.Write(fullLen - 32 - (includeHeader ? 1 : 0));
                writer.Seek(newLoc, SeekOrigin.Begin);
            }
        }
        else
        {
            for (int i = 0; i < Value.Length; i++)
            {
                Value[i].Offset = writer.BaseStream.Position;
                Value[i].Write(writer, false);
            }

            //if (ArrayType.Value.Value == "StructProperty" && writer.Asset.SetStructTypeOverride.ContainsKey(Name.Value.Value)) {
            //        writer.Write(new FName("None"));
            //}
        }

        return (int)writer.BaseStream.Position - here;
    }

    public override void FromString(string[] d, UAsset asset)
    {
        if (d[4] != null) ArrayType = FName.FromString(d[4]);
    }

    protected override void HandleCloned(PropertyData res)
    {
        ArrayPropertyData cloningProperty = (ArrayPropertyData)res;
        cloningProperty.ArrayType = (FName)this.ArrayType?.Clone();
        cloningProperty.DummyStruct = (StructPropertyData)this.DummyStruct?.Clone();
    }
}