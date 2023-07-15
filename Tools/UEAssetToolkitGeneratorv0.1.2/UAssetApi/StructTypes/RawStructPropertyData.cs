﻿namespace UAssetAPI.StructTypes;
public class RawStructPropertyData : PropertyData<byte[]> {

    public RawStructPropertyData(FName name) : base(name) {

    }

    public RawStructPropertyData() {

    }

    private static readonly FName CurrentPropertyType = new FName("RawStruct");
    public override bool HasCustomStructSerialization { get { return true; } }
    public override FName PropertyType { get { return CurrentPropertyType; } }

    public override void Read(AssetBinaryReader reader, bool includeHeader, long leng1, long leng2 = 0) {
        if (includeHeader) {
            PropertyGuid = reader.ReadPropertyGuid();
        }

        Value = reader.ReadBytes((int)leng1);
    }

    public override int Write(AssetBinaryWriter writer, bool includeHeader) {
        if (includeHeader) {
            writer.WritePropertyGuid(PropertyGuid);
        }

        writer.Write(Value);

        return Value.Length;
    }

}