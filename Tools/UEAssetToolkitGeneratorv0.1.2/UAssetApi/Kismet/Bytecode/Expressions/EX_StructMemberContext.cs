﻿namespace UAssetAPI.Kismet.Bytecode.Expressions;

/// <summary>
/// A single Kismet bytecode instruction, corresponding to the <see cref="EExprToken.StructMemberContext"/> instruction.
/// </summary>
public class EX_StructMemberContext : KismetExpression
{
    /// <summary>
    /// The token of this expression.
    /// </summary>
    public override EExprToken Token { get { return EExprToken.StructMemberContext; } }

    /// <summary>
    /// A pointer to the struct member expression (FProperty*).
    /// </summary>
    //[JsonProperty]
    //public FPackageIndex StructMemberExpression;
    [JsonProperty]
    public KismetPropertyPointer Property;

    /// <summary>
    /// Struct expression.
    /// </summary>
    [JsonProperty]
    public KismetExpression StructExpression;

    public EX_StructMemberContext()
    {

    }

    /// <summary>
    /// Reads out the expression from a BinaryReader.
    /// </summary>
    /// <param name="reader">The BinaryReader to read from.</param>
    public override void Read(AssetBinaryReader reader)
    {
        //StructMemberExpression = reader.XFERPTR();
        Property = reader.XFER_PROP_POINTER();
        StructExpression = ExpressionSerializer.ReadExpression(reader);
    }

    /// <summary>
    /// Writes the expression to a BinaryWriter.
    /// </summary>
    /// <param name="writer">The BinaryWriter to write from.</param>
    /// <returns>The iCode offset of the data that was written.</returns>
    public override int Write(AssetBinaryWriter writer)
    {
        int offset = 0;
        offset += writer.XFER_PROP_POINTER(Property);
        offset += ExpressionSerializer.WriteExpression(StructExpression, writer);
        return offset;
    }
}
