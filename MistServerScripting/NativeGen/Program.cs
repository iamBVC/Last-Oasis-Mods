using System.IO;
using System.Text;

namespace NativeGen
{
    internal class NativeGen
    {
        private static void Main(string[] args)
        {
            var natives = new List<Native>();

            using (var dbg = new DbgHelp(args[0] + "\\MistServer-Win64-Shipping.exe"))
            {
                dbg.EnumAll((int offset, string name, string undName) =>
                {
                    if (name.Contains("Render")
                        || name.Contains("Movie")
                        || name.Contains("PostProcess")
                        ) return;

                    natives.Add(new Native
                    {
                        Symbol = name,
                        Unmangled = undName,
                        Offset = offset
                    });
                });
            };

            natives.Sort((a, b) => a.Unmangled.CompareTo(b.Unmangled));

            using (var msFile = File.Create(args[0] + "\\Symbols.bin"))
            using (var wrFile = new BinaryWriter(msFile))
            {
                wrFile.Write(natives.Count);

                using (var msPairs = new MemoryStream())
                using (var msText = new MemoryStream())
                using (var wrPairs = new BinaryWriter(msPairs))
                using (var wrText = new BinaryWriter(msText))
                {
                    var ptText = 0;
                    for (int i = 0; i < natives.Count; i++)
                    {
                        var native = natives[i];
                        var ascii = Encoding.ASCII.GetBytes(native.Symbol);
                        wrPairs.Write(ptText);
                        wrPairs.Write(native.Offset);
                        wrText.Write(ascii);
                        wrText.Write('\0');
                        ptText += ascii.Length + 1;
                    }

                    msPairs.WriteTo(msFile);
                    msText.WriteTo(msFile);
                }
            }
        }
    }
}