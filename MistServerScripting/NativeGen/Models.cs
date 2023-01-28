using System.Security.Cryptography;
using System.Text;

namespace NativeGen
{
    internal class Native
    {
        public string Symbol { get; set; }

        public string Unmangled { get; set; }

        public int Offset { get; set; }

        public string GetHash()
        {
            using (var md5 = MD5.Create())
            {
                var input = Encoding.UTF8.GetBytes(Symbol);
                var hash = md5.ComputeHash(input);

                return Convert.ToHexString(hash);
            }
        }
    }
}
