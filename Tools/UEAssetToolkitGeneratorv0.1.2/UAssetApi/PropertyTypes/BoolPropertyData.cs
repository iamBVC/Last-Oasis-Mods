﻿namespace UAssetAPI.PropertyTypes;

/// <summary>
/// Describes a boolean (<see cref="bool"/>).
/// </summary>
public class BoolPropertyData : PropertyData<bool>
{
    public BoolPropertyData(FName name) : base(name)
    {

    }

    public BoolPropertyData()
    {

    }

    private static readonly FName CurrentPropertyType = new FName("BoolProperty");
    public override FName PropertyType { get { return CurrentPropertyType; } }

    public override void Read(AssetBinaryReader reader, bool includeHeader, long leng1, long leng2 = 0)
    {
        Value = reader.ReadBoolean();
        if (includeHeader)
        {
            PropertyGuid = reader.ReadPropertyGuid();
        }
    }

    public override int Write(AssetBinaryWriter writer, bool includeHeader)
    {
        writer.Write(Value);
        if (includeHeader)
        {
            writer.WritePropertyGuid(PropertyGuid);
        }
        return 0;
    }

    public override string ToString()
    {
        return Convert.ToString(Value);
    }

    public override void FromString(string[] d, UAsset asset)
    {
        Value = d[0].Equals("1") || d[0].ToLowerInvariant().Equals("true");
    }

    public override JToken ToJson() {
        return Value;
    }
}