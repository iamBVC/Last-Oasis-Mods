namespace NativeGen
{
    internal class NativeGen
    {
        private static void Main(string[] args)
        {
            var natives = new List<Native>();

            using (var dbg = new DbgHelp(args[0]))
            {
                dbg.EnumAll((ulong offset, string name, string undName) =>
                {
                    if (name.Contains("Widget")
                        || name.Contains("Slate")
                        || name.Contains("Render")
                        || name.Contains("Movie")
                        || name.Contains("PostProcess")
                        || name.Contains("Camera")
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

            var file = args[1];
            File.Create(file).Close();
            File.AppendAllLines(file, new[] { "#pragma once", "", "", ""});

            foreach (var native in natives)
            {
                var s = $@"
/*
 *  {native.Unmangled}
*/
#define SYM_{native.GetHash()} 0x{native.Offset:x2}


";
                File.AppendAllText(file, s);
            }
        }
    }
}