﻿namespace UAssetAPI.StructTypes;

public class Box2DPropertyData : PropertyData<Vector2DPropertyData[]> // Min, Max, IsValid
{
    [JsonProperty]
    public bool IsValid;

    public Box2DPropertyData(FName name) : base(name)
    {

    }

    public Box2DPropertyData()
    {

    }

    private static readonly FName CurrentPropertyType = new FName("Box2D");
    public override bool HasCustomStructSerialization { get { return true; } }
    public override FName PropertyType { get { return CurrentPropertyType; } }

    public override void Read(AssetBinaryReader reader, bool includeHeader, long leng1, long leng2 = 0)
    {
        if (includeHeader)
        {
            PropertyGuid = reader.ReadPropertyGuid();
        }

        Value = new Vector2DPropertyData[2];
        for (int i = 0; i < 2; i++)
        {
            var next = new Vector2DPropertyData(Name);
            next.Read(reader, false, 0);
            Value[i] = next;
        }

        IsValid = reader.ReadBoolean();
    }

    public override int Write(AssetBinaryWriter writer, bool includeHeader)
    {
        if (includeHeader)
        {
            writer.WritePropertyGuid(PropertyGuid);
        }

        int totalSize = 0;
        for (int i = 0; i < 2; i++)
        {
            totalSize += Value[i].Write(writer, includeHeader);
        }
        writer.Write(IsValid);
        return totalSize + sizeof(bool);
    }

    public override void FromString(string[] d, UAsset asset)
    {
        IsValid = d[0].Equals("1") || d[0].ToLower().Equals("true");
    }

    public override string ToString()
    {
        string oup = "(";
        for (int i = 0; i < Value.Length; i++)
        {
            oup += Value[i] + ", ";
        }
        return oup.Remove(oup.Length - 2) + ")";
    }

    protected override void HandleCloned(PropertyData res)
    {
        Box2DPropertyData cloningProperty = (Box2DPropertyData)res;

        Vector2DPropertyData[] newData = new Vector2DPropertyData[this.Value.Length];
        for (int i = 0; i < this.Value.Length; i++)
        {
            newData[i] = (Vector2DPropertyData)this.Value[i].Clone();
        }
        cloningProperty.Value = newData;
    }

    public override JToken ToJson() {
        JObject res = new JObject();

        res.Add("Min", Value[0].ToJson());
        res.Add("Max", Value[1].ToJson());
        res.Add("IsValid", IsValid);

        return res;
    }
}