using System.ComponentModel;
using System.Runtime.InteropServices;
using System.Text;

public unsafe class DbgHelp : IDisposable
{
    [DllImport("Kernel32.dll")]
    private static extern IntPtr GetCurrentProcess();

    [DllImport("Dbghelp.dll")]
    private static extern int SymSetOptions(int SymOptions);

    [DllImport("Dbghelp.dll")]
    private static extern bool SymInitialize(IntPtr hProcess, string UserSearchPath, bool fInvadeProcess);

    [DllImport("Dbghelp.dll")]
    private static extern bool SymCleanup(IntPtr hProcess);

    [DllImport("Dbghelp.dll")]
    private static extern ulong SymLoadModuleEx(IntPtr hProcess, IntPtr hFile, string ImageName, string ModuleName, ulong BaseOfDll, int DllSize, IntPtr Data, int Flags);

    [DllImport("Dbghelp.dll")]
    private static extern bool SymUnloadModule64(IntPtr hProcess, ulong BaseOfDll);

    [DllImport("Dbghelp.dll")]
    private static extern bool SymEnumSymbols(IntPtr hProcess, ulong BaseOfDll, string Mask, EnumCallback EnumSymbolsCallback, SymbolVisitor UserContext);

    [DllImport("Dbghelp.dll")]
    private static extern int UnDecorateSymbolName(byte* name, byte* outputString, int maxStringLength, int flags);

    private delegate bool EnumCallback(SymbolInfo* pSymInfo, uint SymbolSize, SymbolVisitor UserContext);

#pragma warning disable CS0649
    private struct SymbolInfo
    {
        public uint SizeOfStruct;
        public uint TypeIndex;
        public ulong Reserved0;
        public ulong Reserved1;
        public uint Index;
        public uint Size;
        public ulong ModBase;
        public uint Flags;
        public ulong Value;
        public ulong Address;
        public uint Register;
        public uint Scope;
        public uint Tag;
        public uint NameLen;
        public uint MaxNameLen;
        public byte Name;
    }
#pragma warning restore CS0649

    private IntPtr _process;
    private ulong _base;

    public delegate void SymbolVisitor(int offset, string name, string undName);

    public DbgHelp(string path)
    {
        _process = GetCurrentProcess();
        SymSetOptions(0x100);
        if (SymInitialize(_process, null, false))
        {
            _base = SymLoadModuleEx(
                _process,
                IntPtr.Zero,
                path,
                null,
                0,
                0,
                IntPtr.Zero,
                0);
        }

        if (_base == 0) throw new Win32Exception();
    }

    public void Dispose()
    {
        if (_base != 0) SymUnloadModule64(_process, _base);
        SymCleanup(_process);
    }

    public void EnumAll(SymbolVisitor visitor)
    {
        SymEnumSymbols(
            _process,
            _base,
            "*",
            EnumCallbackImpl,
            visitor);
    }

    private static bool EnumCallbackImpl(SymbolInfo* sym, uint sz, SymbolVisitor visitor)
    {
        //if (sym->Tag == 10 && (sym->Flags & 0x00400000) == 0x00400000)
        {
            var len = 256;
            byte* buff = stackalloc byte[len];
            len = UnDecorateSymbolName(&sym->Name, buff, len, 0x0008 | 0x0010 | 0x0080 | 0x0200);

            visitor(
                (int)(sym->Address - sym->ModBase),
                Encoding.ASCII.GetString(&sym->Name, (int)sym->NameLen),
                Encoding.ASCII.GetString(buff, len));
        }


        return true;
    }
}
