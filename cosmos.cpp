#include <windows.h>
#include <defs.h>
#include <stdarg.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

unsigned __int8 __cdecl sub_10001000(unsigned __int8 a1);
std::exception *__thiscall sub_10001020(std::exception *this, char *a2);
int __thiscall sub_10001059(_DWORD *this);
_DWORD *__thiscall sub_10001082(_DWORD *Block, char a2);
int sub_1000109E();
int __cdecl sub_100011A3(int a1);
int sub_100012FA();
BOOL RefreshDev();
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);
// int __userpurge sub_1000148D@<eax>(int a1@<esi>, char a2, int a3);
// _DWORD *__userpurge sub_100014D4@<eax>(_DWORD *a1@<esi>, _DWORD *a2);
// _DWORD *__usercall sub_10001565@<eax>(_DWORD *a1@<eax>, int a2@<ecx>);
// BOOL __usercall sub_1000157C@<eax>(_DWORD *a1@<eax>, unsigned int a2@<edi>);
_DWORD *__stdcall sub_100015C1(_DWORD *a1, unsigned int a2, int a3);
void *__fastcall sub_100016BA(unsigned int a1);
// void *__usercall sub_100016F7@<eax>(int a1@<eax>, void *Destination, int a3, void *Source);
std::exception *__thiscall sub_10001716(std::exception *this, struct std::exception *a2);
int sub_1000174E();
void **__thiscall sub_10001870(void **Block, char a2);
int __thiscall sub_1000188C(void **this);
void __thiscall sub_10001908(int this, int a2);
// void __usercall sub_10001949(void **a1@<esi>);
// void __userpurge sub_1000195A(size_t a1@<ebx>, int a2@<edi>, void *Source);
// int __userpurge sub_1000199F@<eax>(int a1@<ebx>, rsize_t *a2);
// int __userpurge sub_10001ABB@<eax>(int a1@<eax>, wchar_t *String);
// _DWORD *__userpurge sub_10001AE7@<eax>(_DWORD *a1@<eax>, unsigned int a2@<ebx>, _DWORD *a3, unsigned int a4);
// _DWORD *__userpurge sub_10001B6D@<eax>(unsigned int a1@<eax>, _DWORD *a2@<esi>, char *Source);
// _DWORD *__userpurge sub_10001BF2@<eax>(unsigned int a1@<edi>, _DWORD *a2@<esi>, unsigned int a3);
// _DWORD *__usercall sub_10001C6D@<eax>(_DWORD *a1@<esi>);
_DWORD *__thiscall sub_10001D43(_DWORD *Block, char a2);
void __thiscall sub_10001D5F(_DWORD *this);
errno_t __thiscall sub_10001D77(void **this, int a2);
int __thiscall sub_10001EB3(char *this);
int __thiscall sub_10001F70(char *this);
int __fastcall sub_100021D1(DWORD a1, int a2, HKEY hKey, char a4, LPCWSTR lpValueName, int a6, int a7, int a8, int a9, unsigned int a10, char *a11);
// void *__userpurge sub_10002273@<eax>(void **a1@<esi>, _DWORD *a2);
// int __usercall sub_10002448@<eax>(_DWORD *a1@<eax>, int a2@<esi>);
// _BYTE *__usercall sub_10002467@<eax>(_BYTE *a1@<eax>, int a2);
DWORD __cdecl sub_100024AC(LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite);
int __cdecl sub_1000254B(int a1);
// void *__usercall sub_100025CC@<eax>(void *result@<eax>, char *a2@<ebx>, void *Source, rsize_t SourceSize);
int __cdecl sub_10002613(int, wchar_t *Format, va_list ArgList); // idb
int sub_10002687(int a1, wchar_t *Format, ...);
FARPROC __stdcall sub_10002744(int *a1, int *Arguments);
// int __stdcall std::string::_Tidy(char, rsize_t SourceSize); idb
// _DWORD __stdcall std::string::string(rsize_t SourceSize); weak
_DWORD *__thiscall sub_10002BB0(_DWORD *this, rsize_t a2);
void __thiscall sub_10002BF3(_DWORD *this);
_DWORD *__thiscall sub_10002C10(_DWORD *Block, char a2);
void __thiscall sub_10002C2C(_DWORD *this);
_DWORD *__thiscall sub_10002C37(_DWORD *Block, char a2);
void __thiscall sub_10002C59(_DWORD *this);
_DWORD *__thiscall sub_10002C64(_DWORD *Block, char a2);
// void __cdecl __noreturn std::_String_base::_Xlen(); idb
std::exception *__thiscall sub_10002CC5(std::exception *this, struct std::exception *a2);
std::exception *__thiscall sub_10002CFF(std::exception *this, struct std::exception *a2);
// void __cdecl __noreturn std::_String_base::_Xran(); idb
std::exception *__thiscall sub_10002E18(std::exception *this, struct std::exception *a2);
_DWORD *__thiscall sub_10002F77(_DWORD *this);
// _DWORD __thiscall std::exception::exception(std::exception *__hidden this, const char *const *); idb
// _DWORD __thiscall std::exception::exception(std::exception *__hidden this, const struct std::exception *); idb
void __thiscall sub_10003046(void *this);
void *__thiscall sub_10003069(void *Block, char a2);
// static errno_t __cdecl memcpy_s(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize);
void __thiscall sub_10003100(struct type_info *this);
struct type_info *__thiscall sub_1000310E(struct type_info *Block, char a2);
void __cdecl j__free(void *Block);
// void *__cdecl operator new(size_t Size); idb
// size_t __cdecl wcslen(const wchar_t *String);
// int __cdecl atexit(void (__cdecl *)());
void *__cdecl operator new(size_t Size, const struct std::nothrow_t *); // idb
void __cdecl j_j__free(void *Block);
// static errno_t __cdecl memmove_s(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize);
// void *__cdecl memset(void *, int Val, size_t Size);
// int __cdecl _vsnwprintf_s(wchar_t *const Buffer, const size_t BufferCount, const size_t MaxCount, const wchar_t *const Format, va_list ArgList);
// void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo);
// void __cdecl free(void *Block);
int __cdecl sub_100043A5(int a1);
// void __cdecl __noreturn _invoke_watson(const wchar_t *Expression, const wchar_t *FunctionName, const wchar_t *FileName, unsigned int LineNo, uintptr_t Reserved);
// int __cdecl _invalid_parameter(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int *__cdecl _errno();
// void __cdecl type_info::_Type_info_dtor(struct type_info *); idb
int __cdecl sub_10004648(int a1);
// _DWORD __cdecl _encode_pointer(_DWORD); weak
// int _encoded_null(void); weak
// _DWORD __cdecl _decode_pointer(_DWORD); weak
// _DWORD __cdecl _amsg_exit(_DWORD); weak
int __cdecl sub_10004EB8(_DWORD *a1);
int __cdecl sub_10004EEF(_DWORD *a1);
// _LocaleUpdate *__thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *__hidden this, struct localeinfo_struct *); idb
void *sub_10006A23();
void __cdecl sub_10006A47(); // idb
void __thiscall sub_10006DA2(void *this);
_DWORD *__thiscall sub_10006DAD(_DWORD *Block, char a2);
std::exception *__thiscall sub_10007930(std::exception *this, struct std::exception *a2);
// _DWORD __cdecl _mtinitlocknum(_DWORD); weak
// void __cdecl _lock(int a1);
void sub_10008BF9();
// int __usercall CPtoLCID@<eax>(int a1@<eax>);
// UINT __usercall getSystemCP@<eax>(int a1@<esi>);
// _DWORD __cdecl _ValidateImageBase(_DWORD); weak
// _DWORD __cdecl _FindPESection(_DWORD, _DWORD); weak
// unsigned int __usercall siglookup@<eax>(int a1@<edx>, unsigned int a2);
int sub_10009AA8();
int __cdecl sub_10009C65(int a1);
int __cdecl sub_10009C6F(int a1);
int __cdecl sub_10009C79(int a1);
// int _get_sse2_info(void); weak
int sub_10009F5B();
void **sub_1000A848();
int __cdecl sub_1000B0B3(int a1, int a2, int a3);
// _DWORD __cdecl flsall(_DWORD); weak
int sub_1000C1A1();
// void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue);
// _DWORD __cdecl ValidateScopeTableHandlers(_DWORD); weak
// int __cdecl _ValidateEH3RN(_DWORD *a1);
int sub_1000D7DC();
int sub_1000D800();
int sub_1000D824();
int sub_1000D848();
int sub_1000D86C();
int sub_1000D890();
int sub_1000D8B4();
int sub_1000D8D8();
int sub_1000D8FC();
int sub_1000D920();
int sub_1000D944();
int sub_1000D968();
int sub_1000D98C();
int sub_1000D9B0();
int sub_1000D9D4();
int sub_1000D9F8();
void __cdecl sub_1000DA1C(); // idb
void __cdecl sub_1000DA2D(); // idb
void __cdecl sub_1000DA3E(); // idb
void __cdecl sub_1000DA4F(); // idb
void __cdecl sub_1000DA60(); // idb
void __cdecl sub_1000DA71(); // idb
void __cdecl sub_1000DA82(); // idb
void __cdecl sub_1000DA93(); // idb
void __cdecl sub_1000DAA4(); // idb
void __cdecl sub_1000DAB5(); // idb
void __cdecl sub_1000DAC6(); // idb
void __cdecl sub_1000DAD7(); // idb
void __cdecl sub_1000DAE8(); // idb
void __cdecl sub_1000DAF9(); // idb
void __cdecl sub_1000DB0A(); // idb
void __cdecl sub_1000DB1B(); // idb
void __cdecl sub_1000DB2C(int a1);

//-------------------------------------------------------------------------
// Data declarations

__int16 _ImageBase = 23117; // weak
__int16 word_10000002 = 144; // weak
// extern DWORD (__stdcall *GetLastError)();
// extern UINT (__stdcall *SetErrorMode)(UINT uMode);
// extern BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule);
// extern HANDLE (__stdcall *GetCurrentProcess)();
// extern BOOL (__stdcall *CloseHandle)(HANDLE hObject);
// extern FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName);
// extern HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName);
// extern HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// extern DWORD (__stdcall *ExpandEnvironmentStringsW)(LPCWSTR lpSrc, LPWSTR lpDst, DWORD nSize);
// extern BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
// extern HLOCAL (__stdcall *LocalAlloc)(UINT uFlags, SIZE_T uBytes);
// extern LONG (__stdcall *InterlockedExchange)(volatile LONG *Target, LONG Value);
// extern HMODULE (__stdcall *LoadLibraryA)(LPCSTR lpLibFileName);
// extern void (__stdcall *RaiseException)(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments);
void *std::bad_alloc::`vftable' = &sub_10001082; // weak
void *std::logic_error::`vftable' = &sub_10002C10; // weak
void *std::length_error::`vftable' = &sub_10002C37; // weak
void *std::out_of_range::`vftable' = &sub_10002C64; // weak
void *std::exception::`vftable' = &sub_10003069; // weak
void *type_info::`vftable' = &sub_1000310E; // weak
void *std::bad_exception::`vftable' = &sub_10006DAD; // weak
CHAR aGetprocesswind[] = "GetProcessWindowStation"; // idb
CHAR aGetuserobjecti[] = "GetUserObjectInformationA"; // idb
CHAR aGetlastactivep[] = "GetLastActivePopup"; // idb
CHAR aGetactivewindo[] = "GetActiveWindow"; // idb
CHAR aMessageboxa[] = "MessageBoxA"; // idb
CHAR LibFileName[] = "USER32.DLL"; // idb
_BYTE byte_1000FC28[88] =
{
  0,
  0,
  36,
  56,
  -21,
  61,
  -111,
  88,
  -81,
  11,
  58,
  50,
  128,
  54,
  -65,
  33,
  -61,
  -26,
  -46,
  -43,
  70,
  -19,
  -11,
  15,
  18,
  -106,
  -54,
  -54,
  -77,
  -77,
  -64,
  -64,
  -76,
  -76,
  -47,
  -47,
  -68,
  -68,
  -2,
  -2,
  -105,
  -105,
  -8,
  -8,
  -117,
  -117,
  -35,
  -35,
  -72,
  -72,
  -54,
  -54,
  -71,
  -71,
  -48,
  -48,
  -65,
  -65,
  -47,
  -47,
  -47,
  -47,
  91,
  -110,
  -45,
  -29,
  -105,
  -70,
  88,
  -109,
  -118,
  -25,
  76,
  112,
  80,
  6,
  -43,
  108,
  4,
  -104,
  128,
  -9,
  -11,
  126,
  0,
  0,
  0,
  0
}; // weak
_BYTE byte_1000FCD0[116] =
{
  0,
  0,
  66,
  66,
  83,
  89,
  53,
  46,
  82,
  -7,
  -93,
  -56,
  15,
  113,
  104,
  -6,
  97,
  23,
  37,
  70,
  62,
  -31,
  92,
  -14,
  95,
  -38,
  -47,
  -47,
  -112,
  -112,
  -62,
  -62,
  -122,
  -122,
  -47,
  -47,
  -112,
  -112,
  -62,
  -62,
  -121,
  -121,
  -37,
  -37,
  -97,
  -97,
  -38,
  -38,
  -119,
  -119,
  -54,
  -54,
  -104,
  -104,
  -47,
  -47,
  -127,
  -127,
  -43,
  -43,
  -100,
  -100,
  -45,
  -45,
  -99,
  -99,
  -63,
  -63,
  -110,
  -110,
  -21,
  -21,
  -104,
  -104,
  -20,
  -20,
  -119,
  -119,
  -28,
  -28,
  -72,
  -72,
  -6,
  -6,
  -77,
  -77,
  -4,
  -4,
  -81,
  -81,
  -81,
  -81,
  101,
  -104,
  27,
  91,
  106,
  59,
  -97,
  49,
  -100,
  -13,
  27,
  -49,
  52,
  118,
  53,
  112,
  102,
  -17,
  -9,
  5,
  43,
  109,
  0,
  0
}; // weak
wchar_t String = 0u; // idb
_BYTE byte_1000FD48[72] =
{
  0,
  0,
  22,
  28,
  -9,
  -90,
  -90,
  49,
  -78,
  24,
  -110,
  82,
  60,
  -86,
  -44,
  -18,
  7,
  -31,
  30,
  -104,
  74,
  5,
  -44,
  -94,
  -28,
  78,
  -37,
  -37,
  -110,
  -110,
  -35,
  -35,
  -114,
  -114,
  -40,
  -40,
  -67,
  -67,
  -45,
  -45,
  -73,
  -73,
  -40,
  -40,
  -86,
  -86,
  -86,
  -86,
  125,
  -123,
  -103,
  63,
  -113,
  -24,
  68,
  85,
  45,
  76,
  40,
  90,
  -5,
  46,
  14,
  81,
  54,
  72,
  79,
  47,
  76,
  -8,
  0,
  0
}; // weak
_BYTE byte_1000FD90[80] =
{
  0,
  0,
  24,
  48,
  116,
  -75,
  84,
  66,
  33,
  106,
  -13,
  -21,
  -96,
  -8,
  -67,
  104,
  -42,
  4,
  21,
  -120,
  48,
  51,
  58,
  38,
  73,
  30,
  -37,
  -37,
  -110,
  -110,
  -35,
  -35,
  -114,
  -114,
  -40,
  -40,
  -67,
  -67,
  -49,
  -49,
  -68,
  -68,
  -43,
  -43,
  -70,
  -70,
  -44,
  -44,
  -44,
  -44,
  -11,
  -111,
  98,
  82,
  -119,
  -59,
  -31,
  6,
  29,
  88,
  -42,
  87,
  -42,
  -98,
  -116,
  -38,
  66,
  111,
  17,
  17,
  41,
  -25,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
}; // weak
_BYTE byte_1000FDE0[88] =
{
  0,
  0,
  32,
  -57,
  117,
  -74,
  -58,
  -98,
  118,
  3,
  -35,
  111,
  -22,
  4,
  81,
  -109,
  14,
  -69,
  21,
  47,
  -72,
  -68,
  -113,
  98,
  -37,
  -83,
  -37,
  -37,
  -110,
  -110,
  -35,
  -35,
  -114,
  -114,
  -36,
  -36,
  -71,
  -71,
  -43,
  -43,
  -80,
  -80,
  -47,
  -47,
  -94,
  -94,
  -57,
  -57,
  -125,
  -125,
  -30,
  -30,
  -106,
  -106,
  -13,
  -13,
  -13,
  -13,
  -104,
  126,
  -43,
  -111,
  30,
  125,
  -86,
  -29,
  50,
  -23,
  127,
  123,
  42,
  -29,
  124,
  30,
  -37,
  12,
  -19,
  111,
  -114,
  -100,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
}; // weak
_BYTE byte_1000FE98[88] =
{
  0,
  0,
  34,
  -105,
  12,
  115,
  107,
  50,
  54,
  -87,
  59,
  -40,
  -63,
  76,
  113,
  -79,
  31,
  104,
  -93,
  48,
  -31,
  73,
  120,
  -19,
  -42,
  -116,
  -37,
  -37,
  -70,
  -70,
  -55,
  -55,
  -84,
  -84,
  -18,
  -18,
  -127,
  -127,
  -32,
  -32,
  -110,
  -110,
  -10,
  -10,
  -90,
  -90,
  -44,
  -44,
  -69,
  -69,
  -33,
  -33,
  -86,
  -86,
  -55,
  -55,
  -67,
  -67,
  -67,
  -67,
  35,
  -117,
  -42,
  -69,
  -83,
  70,
  40,
  49,
  -66,
  2,
  -49,
  61,
  -37,
  7,
  -40,
  -85,
  -84,
  -5,
  -122,
  -41,
  18,
  53,
  0,
  0,
  0,
  0,
  0,
  0
}; // weak
_BYTE byte_1000FEF0[84] =
{
  0,
  0,
  34,
  -44,
  -118,
  -57,
  -72,
  92,
  43,
  111,
  -44,
  75,
  102,
  86,
  98,
  113,
  53,
  -29,
  -20,
  74,
  -35,
  70,
  33,
  -19,
  -20,
  -74,
  -37,
  -37,
  -70,
  -70,
  -55,
  -55,
  -84,
  -84,
  -18,
  -18,
  -127,
  -127,
  -32,
  -32,
  -110,
  -110,
  -10,
  -10,
  -96,
  -96,
  -59,
  -59,
  -73,
  -73,
  -60,
  -60,
  -83,
  -83,
  -62,
  -62,
  -84,
  -84,
  -84,
  -84,
  70,
  125,
  28,
  -112,
  -6,
  84,
  -30,
  -10,
  -118,
  -38,
  18,
  -15,
  96,
  52,
  65,
  -12,
  -2,
  116,
  -42,
  -85,
  -49,
  -43,
  0,
  0
}; // weak
_BYTE byte_1000FF44[52] =
{
  0,
  0,
  24,
  46,
  -20,
  128,
  75,
  41,
  -25,
  58,
  79,
  119,
  19,
  -41,
  -93,
  -16,
  -107,
  -31,
  -88,
  -58,
  -96,
  -49,
  -67,
  -48,
  -79,
  -59,
  -84,
  -61,
  -83,
  -3,
  -113,
  -32,
  -125,
  -26,
  -107,
  -26,
  -26,
  127,
  45,
  44,
  -69,
  28,
  -88,
  -94,
  -124,
  51,
  94,
  -40,
  0,
  0,
  0,
  0
}; // weak
_BYTE byte_1000FFC8[88] =
{
  0,
  0,
  38,
  15,
  -101,
  -89,
  -76,
  -71,
  -32,
  -100,
  -125,
  41,
  82,
  -20,
  -93,
  -1,
  127,
  7,
  52,
  -55,
  -33,
  14,
  -4,
  69,
  -20,
  -102,
  -54,
  -54,
  -77,
  -77,
  -64,
  -64,
  -76,
  -76,
  -47,
  -47,
  -68,
  -68,
  -15,
  -15,
  -112,
  -112,
  -2,
  -2,
  -117,
  -117,
  -19,
  -19,
  -116,
  -116,
  -17,
  -17,
  -101,
  -101,
  -18,
  -18,
  -100,
  -100,
  -7,
  -7,
  -117,
  -117,
  -117,
  -117,
  16,
  2,
  -20,
  -64,
  -97,
  23,
  -35,
  -126,
  73,
  -79,
  -98,
  94,
  105,
  -62,
  -98,
  80,
  118,
  -85,
  -30,
  95,
  83,
  -86,
  0,
  0
}; // weak
_BYTE byte_10010020[88] =
{
  0,
  0,
  36,
  93,
  -56,
  18,
  -6,
  -37,
  -99,
  25,
  118,
  42,
  41,
  114,
  -56,
  -38,
  65,
  53,
  44,
  42,
  -79,
  80,
  -95,
  71,
  -100,
  -62,
  -54,
  -54,
  -77,
  -77,
  -64,
  -64,
  -76,
  -76,
  -47,
  -47,
  -68,
  -68,
  -20,
  -20,
  -98,
  -98,
  -15,
  -15,
  -107,
  -107,
  -32,
  -32,
  -125,
  -125,
  -9,
  -9,
  -71,
  -71,
  -40,
  -40,
  -75,
  -75,
  -48,
  -48,
  -48,
  -48,
  -118,
  51,
  73,
  36,
  -9,
  -51,
  -4,
  86,
  71,
  106,
  -91,
  -105,
  -35,
  -10,
  -78,
  109,
  -126,
  68,
  -73,
  -78,
  34,
  -18,
  0,
  0,
  0,
  0
}; // weak
_BYTE byte_100100C0[80] =
{
  0,
  0,
  28,
  91,
  -96,
  -32,
  24,
  74,
  41,
  1,
  -113,
  -88,
  8,
  69,
  -11,
  24,
  72,
  77,
  112,
  80,
  65,
  -113,
  -60,
  113,
  98,
  -40,
  -54,
  -54,
  -77,
  -77,
  -64,
  -64,
  -76,
  -76,
  -47,
  -47,
  -68,
  -68,
  -22,
  -22,
  -113,
  -113,
  -3,
  -3,
  -114,
  -114,
  -25,
  -25,
  -120,
  -120,
  -26,
  -26,
  -26,
  -26,
  -54,
  98,
  46,
  -99,
  -55,
  37,
  61,
  -79,
  27,
  41,
  13,
  -93,
  -115,
  -110,
  -47,
  -111,
  87,
  12,
  -125,
  90,
  -115,
  -101,
  0,
  0,
  0,
  0
}; // weak
WCHAR Name[] = L"SeTcbPrivilege"; // idb
_BYTE byte_100101B8[72] =
{
  0,
  0,
  20,
  28,
  -25,
  -39,
  -102,
  -29,
  -2,
  -89,
  -109,
  -42,
  21,
  62,
  85,
  49,
  65,
  19,
  -27,
  104,
  26,
  86,
  23,
  -109,
  25,
  108,
  -9,
  -9,
  -125,
  -125,
  -25,
  -25,
  -117,
  -117,
  -25,
  -25,
  -55,
  -55,
  -83,
  -83,
  -63,
  -63,
  -83,
  -83,
  -83,
  -83,
  -25,
  91,
  14,
  60,
  68,
  -97,
  -42,
  50,
  -127,
  -97,
  -92,
  -9,
  48,
  20,
  112,
  89,
  -50,
  52,
  15,
  111,
  -8,
  -89,
  0,
  0,
  0,
  0
}; // weak
_UNKNOWN unk_100105B0; // weak
int (__thiscall *off_100105B4)(void *Block, char) = &sub_10001870; // weak
int (__thiscall *off_100105BC)(void *Block, char) = &sub_10001D43; // weak
_UNKNOWN unk_100108A8; // weak
_ThrowInfo _TI2_AVbad_alloc_std__ = { 0u, &sub_10001059, NULL, &_CTA2_AVbad_alloc_std__ }; // idb
void *off_10012B38 = &unk_10013EA0; // weak
char byte_10013045 = '\xDE'; // weak
// extern BOOL (__stdcall *LookupPrivilegeValueW)(LPCWSTR lpSystemName, LPCWSTR lpName, PLUID lpLuid);
// extern BOOL (__stdcall *OpenProcessToken)(HANDLE ProcessHandle, DWORD DesiredAccess, PHANDLE TokenHandle);
// extern LSTATUS (__stdcall *RegCloseKey)(HKEY hKey);
// extern LSTATUS (__stdcall *RegQueryValueExW)(HKEY hKey, LPCWSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
// extern LSTATUS (__stdcall *RegOpenKeyExW)(HKEY hKey, LPCWSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);
// extern BOOL (__stdcall *AdjustTokenPrivileges)(HANDLE TokenHandle, BOOL DisableAllPrivileges, PTOKEN_PRIVILEGES NewState, DWORD BufferLength, PTOKEN_PRIVILEGES PreviousState, PDWORD ReturnLength);
int dword_100130C4 = 0; // weak
int (__stdcall *dword_100130C8)(_DWORD, _DWORD) = NULL; // weak
int (__stdcall *dword_100130CC)(_DWORD, _DWORD) = NULL; // weak
_UNKNOWN unk_100130D0; // weak
_UNKNOWN dword_100130D4; // weak
int dword_100130F8 = 0; // weak
int dword_10013104 = 0; // weak
int dword_10013120 = 0; // weak
int dword_1001312C = 0; // weak
int dword_10013A9C = 0; // weak
int dword_10013AA8 = 0; // weak
int dword_10013AB4 = 0; // weak
int dword_10013AB8 = 0; // weak
int dword_10013AC4 = 0; // weak
int dword_10013AC8 = 0; // weak
int dword_10013ACC = 0; // weak
int dword_10013AD0 = 0; // weak
int dword_10013AD4 = 0; // weak
_UNKNOWN unk_10013BA8; // weak
LPCWSTR lpSrc = NULL; // idb
int dword_10013BC0 = 0; // weak
_DWORD dword_10013BC4[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013BE0[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_UNKNOWN unk_10013BFC; // weak
LPCWSTR dword_10013C00 = NULL; // idb
int dword_10013C14 = 0; // weak
_DWORD dword_10013C18[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013C34[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013C50[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013C6C[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013C88[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013CA4[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013CC0[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013CDC[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013CF8[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_DWORD dword_10013D14[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
_UNKNOWN unk_10013D30; // weak
LPCWSTR lpSubKey = NULL; // idb
int dword_10013D48 = 0; // weak
_DWORD dword_10013D4C[7] = { 0, 0, 0, 0, 0, 0, 0 }; // weak
int dword_10014EA4; // weak
int dword_10014FE4; // weak


//----- (10001000) --------------------------------------------------------
unsigned __int8 __cdecl sub_10001000(unsigned __int8 a1)
{
  __outbyte(0x70u, a1);
  return __inbyte(0x71u);
}

//----- (10001020) --------------------------------------------------------
std::exception *__thiscall sub_10001020(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char *const *)&a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
// 1000E1E4: using guessed type void *std::bad_alloc::`vftable';

//----- (10001059) --------------------------------------------------------
int __thiscall sub_10001059(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_10003046(this);
}
// 10003046: using guessed type int __cdecl sub_10003046(_DWORD);
// 1000E1E4: using guessed type void *std::bad_alloc::`vftable';

//----- (10001082) --------------------------------------------------------
_DWORD *__thiscall sub_10001082(_DWORD *Block, char a2)
{
  sub_10001059(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}

//----- (1000109E) --------------------------------------------------------
int sub_1000109E()
{
  unsigned __int8 v0; // bl
  int v1; // edi
  wchar_t *v2; // esi
  int v3; // eax
  int v5; // [esp+0h] [ebp-BCh] BYREF
  char v6[128]; // [esp+Ch] [ebp-B0h] BYREF
  int v7[7]; // [esp+8Ch] [ebp-30h] BYREF
  int v8; // [esp+A8h] [ebp-14h]
  int *v9; // [esp+ACh] [ebp-10h]
  int v10; // [esp+B8h] [ebp-4h]

  v9 = &v5;
  v0 = 0;
  v10 = 0;
  v1 = sub_1000174E();
  if ( v1 )
  {
    v2 = (wchar_t *)sub_10002467(26);
    GetLastError();
    v3 = sub_10002687((int)v7, v2, v1);
    LOBYTE(v10) = 1;
    sub_100014D4(v3);
    LOBYTE(v10) = 0;
    sub_1000148D(1, 0);
    return v1;
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(v8) = v0;
      if ( v0 >= 0x80u )
        break;
      v6[v0++] = sub_10001000(v8);
    }
    sub_1000195A(v6);
    return 0;
  }
}
// 1000148D: using guessed type _DWORD __stdcall sub_1000148D(char, _DWORD);
// 100014D4: using guessed type _DWORD __stdcall sub_100014D4(_DWORD);
// 1000174E: using guessed type int sub_1000174E(void);
// 1000195A: using guessed type int __stdcall sub_1000195A(_DWORD);
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);
// 1000109E: using guessed type int var_30[7];
// 1000109E: using guessed type char var_B0[128];

//----- (100011A3) --------------------------------------------------------
int __cdecl sub_100011A3(int a1)
{
  void *v1; // esp
  wchar_t *v2; // esi
  int v3; // eax
  wchar_t *v4; // esi
  int v5; // eax
  int v7; // [esp-Ch] [ebp-1A44h] BYREF
  char v8[6664]; // [esp+0h] [ebp-1A38h] BYREF
  int v9[7]; // [esp+1A08h] [ebp-30h] BYREF
  char ArgList[4]; // [esp+1A24h] [ebp-14h]
  int *v11; // [esp+1A28h] [ebp-10h]
  int v12; // [esp+1A34h] [ebp-4h]

  v1 = alloca(6696);
  v11 = &v7;
  v12 = 0;
  sub_10001C6D();
  LOBYTE(v12) = 1;
  *(_DWORD *)ArgList = sub_10001EB3(v8);
  if ( *(_DWORD *)ArgList )
  {
    v2 = (wchar_t *)sub_10002467(26);
    GetLastError();
    v3 = sub_10002687((int)v9, v2, ArgList[0]);
    LOBYTE(v12) = 2;
    sub_100014D4(v3);
    LOBYTE(v12) = 1;
    sub_1000148D(1, 0);
  }
  *(_DWORD *)ArgList = sub_10001F70(v8);
  if ( *(_DWORD *)ArgList )
  {
    v4 = (wchar_t *)sub_10002467(26);
    GetLastError();
    v5 = sub_10002687((int)v9, v4, ArgList[0]);
    LOBYTE(v12) = 3;
    sub_100014D4(v5);
    LOBYTE(v12) = 1;
    sub_1000148D(1, 0);
  }
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)(a1 + 40) + 4))(a1 + 40, v8);
  LOBYTE(v12) = 0;
  sub_10001D5F(v8);
  return *(_DWORD *)ArgList;
}
// 1000148D: using guessed type _DWORD __stdcall sub_1000148D(char, _DWORD);
// 100014D4: using guessed type _DWORD __stdcall sub_100014D4(_DWORD);
// 10001C6D: using guessed type int sub_10001C6D(void);
// 10001D5F: using guessed type int __thiscall sub_10001D5F(_DWORD);
// 10001EB3: using guessed type int __thiscall sub_10001EB3(_DWORD);
// 10001F70: using guessed type int __thiscall sub_10001F70(_DWORD);
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);

//----- (100012FA) --------------------------------------------------------
int sub_100012FA()
{
  void *v0; // esp
  const void *v1; // eax
  int v2; // eax
  int v4; // [esp-Ch] [ebp-1A54h] BYREF
  int v5[1677]; // [esp+0h] [ebp-1A48h] BYREF
  DWORD nNumberOfBytesToWrite[2]; // [esp+1A34h] [ebp-14h] BYREF
  int v7; // [esp+1A44h] [ebp-4h]

  v0 = alloca(6712);
  nNumberOfBytesToWrite[1] = (DWORD)&v4;
  v7 = 0;
  v5[0] = (int)&off_100105B4;
  sub_10001ABB(&String);
  LOBYTE(v7) = 1;
  v5[8] = 0;
  v5[9] = 0;
  sub_10001C6D();
  v5[1676] = 0;
  LOBYTE(v7) = 3;
  sub_1000109E();
  sub_100011A3((int)v5);
  nNumberOfBytesToWrite[0] = 0;
  v1 = (const void *)sub_1000199F(nNumberOfBytesToWrite);
  if ( v1 && nNumberOfBytesToWrite[0] )
  {
    v2 = sub_100024AC(v1, nNumberOfBytesToWrite[0]);
    LOBYTE(v7) = 0;
    if ( v2 )
    {
      sub_1000188C(v5);
      return 2;
    }
    else
    {
      sub_1000188C(v5);
      return 0;
    }
  }
  else
  {
    LOBYTE(v7) = 0;
    sub_1000188C(v5);
    return 1;
  }
}
// 1000188C: using guessed type int __thiscall sub_1000188C(_DWORD);
// 1000199F: using guessed type _DWORD __stdcall sub_1000199F(_DWORD);
// 10001C6D: using guessed type int sub_10001C6D(void);
// 100105B4: using guessed type int (__thiscall *off_100105B4)(void *Block, char);

//----- (100013F3) --------------------------------------------------------
BOOL RefreshDev()
{
  int v0; // edi
  UINT uMode; // [esp+Ch] [ebp-1Ch]

  uMode = SetErrorMode(0x8003u);
  v0 = sub_100012FA();
  SetErrorMode(uMode);
  return v0 == 0;
}

//----- (1000144C) --------------------------------------------------------
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return 1;
}

//----- (1000148D) --------------------------------------------------------
int __userpurge sub_1000148D@<eax>(int a1@<esi>, char a2, int a3)
{
  void *v3; // edi

  if ( a2 && *(_DWORD *)(a1 + 24) >= 8u )
  {
    v3 = *(void **)(a1 + 4);
    if ( a3 )
      sub_100016F7((void *)(a1 + 4), 8, *(void **)(a1 + 4));
    j__free(v3);
  }
  *(_DWORD *)(a1 + 24) = 7;
  return sub_10001565(a3);
}
// 10001565: using guessed type int __thiscall sub_10001565(_DWORD);

//----- (100014D4) --------------------------------------------------------
_DWORD *__userpurge sub_100014D4@<eax>(_DWORD *a1@<esi>, _DWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  void *v4; // ebx
  unsigned int v5; // eax
  _DWORD *v6; // edx

  v2 = -1;
  if ( a2[5] != -1 )
    v2 = a2[5];
  if ( -1 - a1[5] <= v2 || a1[5] + v2 < a1[5] )
    std::_String_base::_Xlen();
  if ( v2 )
  {
    v3 = v2 + a1[5];
    if ( (unsigned __int8)sub_1000157C() )
    {
      if ( a2[6] < 8u )
        v4 = a2 + 1;
      else
        v4 = (void *)a2[1];
      v5 = a1[6];
      if ( v5 < 8 )
        v6 = a1 + 1;
      else
        v6 = (_DWORD *)a1[1];
      sub_100016F7((char *)v6 + 2 * a1[5], v5 - a1[5], v4);
      sub_10001565(v3);
    }
  }
  return a1;
}
// 10001565: using guessed type int __thiscall sub_10001565(_DWORD);
// 1000157C: using guessed type int sub_1000157C(void);

//----- (10001565) --------------------------------------------------------
_DWORD *__usercall sub_10001565@<eax>(_DWORD *a1@<eax>, int a2@<ecx>)
{
  bool v2; // cf
  _DWORD *result; // eax

  v2 = a1[6] < 8u;
  a1[5] = a2;
  if ( v2 )
    result = a1 + 1;
  else
    result = (_DWORD *)a1[1];
  *((_WORD *)result + a2) = 0;
  return result;
}

//----- (1000157C) --------------------------------------------------------
BOOL __usercall sub_1000157C@<eax>(_DWORD *a1@<eax>, unsigned int a2@<edi>)
{
  unsigned int v3; // eax
  _WORD *v4; // esi

  if ( a2 > 0x7FFFFFFE )
    std::_String_base::_Xlen();
  v3 = a1[6];
  if ( v3 >= a2 )
  {
    if ( !a2 )
    {
      a1[5] = 0;
      if ( v3 < 8 )
        v4 = a1 + 1;
      else
        v4 = (_WORD *)a1[1];
      *v4 = 0;
    }
  }
  else
  {
    sub_100015C1(a1, a2, a1[5]);
  }
  return a2 != 0;
}
// 100015C1: using guessed type _DWORD __stdcall sub_100015C1(_DWORD, _DWORD, _DWORD);

//----- (100015C1) --------------------------------------------------------
_DWORD *__stdcall sub_100015C1(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  void *v5; // eax
  int v7; // [esp+0h] [ebp-24h] BYREF
  void *Destination; // [esp+Ch] [ebp-18h]
  unsigned int v9; // [esp+10h] [ebp-14h]
  int *v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v10 = &v7;
  v3 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFE )
  {
    v4 = a1[6];
    v9 = v4 >> 1;
    if ( v3 / 3 < v4 >> 1 && v4 <= 2147483646 - v9 )
      v3 = v9 + v4;
  }
  else
  {
    v3 = a2;
  }
  v11 = 0;
  Destination = (void *)sub_100016BA(v3 + 1);
  v11 = -1;
  if ( a3 )
  {
    if ( a1[6] < 8u )
      v5 = a1 + 1;
    else
      v5 = (void *)a1[1];
    sub_100016F7(Destination, v3 + 1, v5);
  }
  sub_1000148D((int)a1, 1, 0);
  a1[1] = Destination;
  a1[6] = v3;
  return sub_10001565(a1, a3);
}
// 100016BA: using guessed type int __thiscall sub_100016BA(_DWORD);

//----- (100016BA) --------------------------------------------------------
void *__fastcall sub_100016BA(unsigned int a1)
{
  char pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 2 )
    {
      sub_10001020((std::exception *)pExceptionObject, 0);
      _CxxThrowException(pExceptionObject, &_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(2 * a1);
}

//----- (100016F7) --------------------------------------------------------
void *__usercall sub_100016F7@<eax>(int a1@<eax>, void *Destination, int a3, void *Source)
{
  memcpy_s(Destination, 2 * a3, Source, 2 * a1);
  return Destination;
}

//----- (10001716) --------------------------------------------------------
std::exception *__thiscall sub_10001716(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
// 1000E1E4: using guessed type void *std::bad_alloc::`vftable';

//----- (1000174E) --------------------------------------------------------
int sub_1000174E()
{
  int v1; // esi
  const WCHAR *v2; // eax
  HMODULE LibraryW; // esi
  const CHAR *v4; // eax
  FARPROC ProcAddress; // eax
  int v6; // edi
  int v7; // [esp-10h] [ebp-34h]
  struct _TOKEN_PRIVILEGES NewState; // [esp+0h] [ebp-24h] BYREF
  struct _LUID Luid; // [esp+10h] [ebp-14h] BYREF
  HANDLE CurrentProcess; // [esp+18h] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-8h] BYREF
  HANDLE TokenHandle; // [esp+20h] [ebp-4h] BYREF

  TokenHandle = (HANDLE)-1;
  CurrentProcess = GetCurrentProcess();
  if ( !OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle) )
    return 1;
  Luid.LowPart = 0;
  Luid.HighPart = 0;
  if ( !LookupPrivilegeValueW(0, Name, &Luid) )
  {
    v7 = 2;
LABEL_5:
    v1 = v7;
    CloseHandle(TokenHandle);
    return v1;
  }
  NewState.Privileges[0].Luid = Luid;
  NewState.PrivilegeCount = 1;
  NewState.Privileges[0].Attributes = 2;
  if ( !AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x10u, 0, 0) )
  {
    v7 = 3;
    goto LABEL_5;
  }
  if ( GetLastError() == 1300 )
  {
    v7 = 4;
    goto LABEL_5;
  }
  v2 = (const WCHAR *)sub_10002467(byte_100101B8, 26);
  LibraryW = LoadLibraryW(v2);
  if ( !LibraryW )
  {
    v7 = 5;
    goto LABEL_5;
  }
  v4 = sub_10002467(byte_1000FF44, 13);
  ProcAddress = GetProcAddress(LibraryW, v4);
  if ( !ProcAddress )
  {
    FreeLibrary(LibraryW);
    v7 = 6;
    goto LABEL_5;
  }
  v11 = 3;
  v6 = ((int (__stdcall *)(HANDLE, int, int *, int))ProcAddress)(CurrentProcess, 16, &v11, 4);
  FreeLibrary(LibraryW);
  CloseHandle(TokenHandle);
  return v6 != 0 ? 7 : 0;
}
// 1000FF44: using guessed type _BYTE byte_1000FF44[52];
// 100101B8: using guessed type _BYTE byte_100101B8[72];

//----- (10001870) --------------------------------------------------------
void **__thiscall sub_10001870(void **Block, char a2)
{
  sub_1000188C(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}

//----- (1000188C) --------------------------------------------------------
int __thiscall sub_1000188C(void **this)
{
  _DWORD v3[5]; // [esp+0h] [ebp-20h] BYREF
  int v4; // [esp+1Ch] [ebp-4h]

  v3[4] = v3;
  v3[3] = this;
  *this = &off_100105B4;
  v4 = 2;
  sub_10001949(this + 8);
  sub_10001949(this + 1676);
  v4 = 0;
  sub_10001D5F(this + 10);
  v4 = -1;
  return sub_1000148D((int)(this + 1), 1, 0);
}
// 100105B4: using guessed type int (__thiscall *off_100105B4)(void *Block, char);

//----- (10001908) --------------------------------------------------------
void __thiscall sub_10001908(int this, int a2)
{
  sub_10001AE7((_DWORD *)(a2 + 4), 0, (_DWORD *)(this + 4), 0xFFFFFFFF);
  sub_1000195A(*(_DWORD *)(a2 + 36), this, *(void **)(a2 + 32));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 40) + 4))(this + 40, a2 + 40);
  sub_10001949((void **)(this + 6704));
}

//----- (10001949) --------------------------------------------------------
void __usercall sub_10001949(void **a1@<esi>)
{
  if ( *a1 )
  {
    j_j__free(*a1);
    *a1 = 0;
  }
}

//----- (1000195A) --------------------------------------------------------
void __userpurge sub_1000195A(size_t a1@<ebx>, int a2@<edi>, void *Source)
{
  void *v3; // eax

  sub_10001949((void **)(a2 + 32));
  *(_DWORD *)(a2 + 36) = 0;
  v3 = operator new(a1, (const struct std::nothrow_t *)&unk_100130D0);
  *(_DWORD *)(a2 + 32) = v3;
  if ( v3 )
  {
    if ( memcpy_s(v3, a1, Source, a1) )
    {
      sub_10001949((void **)(a2 + 32));
      *(_DWORD *)(a2 + 36) = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 36) = a1;
    }
  }
}

//----- (1000199F) --------------------------------------------------------
int __userpurge sub_1000199F@<eax>(int a1@<ebx>, rsize_t *a2)
{
  int v2; // eax
  int v3; // edi
  rsize_t v4; // esi
  void *v5; // eax
  const void *v7; // eax
  void *v8; // [esp-20h] [ebp-3Ch]
  rsize_t v9; // [esp-1Ch] [ebp-38h]
  const void *v10; // [esp+8h] [ebp-14h]
  int Source; // [esp+Ch] [ebp-10h] BYREF
  rsize_t v12; // [esp+10h] [ebp-Ch]
  rsize_t v13; // [esp+14h] [ebp-8h] BYREF
  rsize_t SourceSize; // [esp+18h] [ebp-4h]

  v2 = *(_DWORD *)(a1 + 24);
  v13 = 0;
  Source = v2;
  SourceSize = 2 * v2;
  v3 = a1 + 6704;
  v12 = *(_DWORD *)(a1 + 36);
  sub_10001949((void **)(a1 + 6704));
  v10 = sub_10002273((void **)(a1 + 40), &v13);
  v4 = v12 + v13 + SourceSize + 12;
  v5 = operator new(v4, (const struct std::nothrow_t *)&unk_100130D0);
  *(_DWORD *)(a1 + 6704) = v5;
  if ( v5 )
  {
    memcpy_s(v5, v4, &unk_100105B0, 4u);
    memcpy_s((void *const)(*(_DWORD *)v3 + 4), v4 - 4, &Source, 4u);
    if ( *(_DWORD *)(a1 + 28) < 8u )
      v7 = (const void *)(a1 + 8);
    else
      v7 = *(const void **)(a1 + 8);
    memcpy_s((void *const)(*(_DWORD *)v3 + 8), v4 - 8, v7, SourceSize);
    v9 = v4 - (SourceSize + 8);
    v8 = (void *)(SourceSize + 8 + *(_DWORD *)v3);
    SourceSize += 8;
    memcpy_s(v8, v9, (const void *const)(a1 + 36), 4u);
    SourceSize += 4;
    memcpy_s((void *const)(SourceSize + *(_DWORD *)v3), v4 - SourceSize, *(const void *const *)(a1 + 32), v12);
    if ( v13 )
      memcpy_s((void *const)(v12 + SourceSize + *(_DWORD *)v3), v4 - (v12 + SourceSize), v10, v13);
    *a2 = v4;
    return *(_DWORD *)v3;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}

//----- (10001ABB) --------------------------------------------------------
int __userpurge sub_10001ABB@<eax>(int a1@<eax>, wchar_t *String)
{
  unsigned int v3; // eax

  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 7;
  *(_WORD *)(a1 + 4) = 0;
  v3 = wcslen(String);
  sub_10001B6D(v3, (_DWORD *)a1, (char *)String);
  return a1;
}

//----- (10001AE7) --------------------------------------------------------
_DWORD *__userpurge sub_10001AE7@<eax>(_DWORD *a1@<eax>, unsigned int a2@<ebx>, _DWORD *a3, unsigned int a4)
{
  unsigned int v5; // edi
  _DWORD *v6; // eax
  unsigned int v7; // edx
  void *v8; // ecx

  if ( a1[5] < a2 )
    std::_String_base::_Xran();
  v5 = a1[5] - a2;
  if ( a4 < v5 )
    v5 = a4;
  if ( a3 == a1 )
  {
    sub_10001BF2(a2 + v5, a3, 0xFFFFFFFF);
    sub_10001BF2(0, a3, a2);
  }
  else if ( sub_1000157C(a3, v5) )
  {
    if ( a1[6] < 8u )
      v6 = a1 + 1;
    else
      v6 = (_DWORD *)a1[1];
    v7 = a3[6];
    if ( v7 < 8 )
      v8 = a3 + 1;
    else
      v8 = (void *)a3[1];
    sub_100016F7(v5, v8, v7, (char *)v6 + 2 * a2);
    sub_10001565(a3, v5);
  }
  return a3;
}

//----- (10001B6D) --------------------------------------------------------
_DWORD *__userpurge sub_10001B6D@<eax>(unsigned int a1@<eax>, _DWORD *a2@<esi>, char *Source)
{
  unsigned int v3; // ecx
  unsigned int *v5; // ebx
  unsigned int v6; // eax
  _DWORD *v7; // eax
  char *v8; // eax
  unsigned int v10; // eax

  v3 = a2[6];
  v5 = a2 + 1;
  if ( v3 < 8 )
    v6 = (unsigned int)(a2 + 1);
  else
    v6 = *v5;
  if ( (unsigned int)Source < v6 || (v3 < 8 ? (v7 = a2 + 1) : (v7 = (_DWORD *)*v5), (char *)v7 + 2 * a2[5] <= Source) )
  {
    if ( sub_1000157C(a2, a1) )
    {
      v10 = a2[6];
      if ( v10 >= 8 )
        v5 = (unsigned int *)*v5;
      sub_100016F7(a1, v5, v10, Source);
      sub_10001565(a2, a1);
    }
    return a2;
  }
  else
  {
    if ( v3 < 8 )
      v8 = (char *)(a2 + 1);
    else
      v8 = (char *)*v5;
    return sub_10001AE7(a2, (Source - v8) >> 1, a2, a1);
  }
}

//----- (10001BF2) --------------------------------------------------------
_DWORD *__userpurge sub_10001BF2@<eax>(unsigned int a1@<edi>, _DWORD *a2@<esi>, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v7; // [esp+4h] [ebp-4h]

  if ( a2[5] < a1 )
    std::_String_base::_Xran();
  v3 = a2[5] - a1;
  if ( v3 < a3 )
    a3 = a2[5] - a1;
  if ( a3 )
  {
    v4 = a2[6];
    v5 = a2 + 1;
    if ( v4 < 8 )
      v7 = a2 + 1;
    else
      v7 = (_DWORD *)*v5;
    if ( v4 >= 8 )
      v5 = (_DWORD *)*v5;
    memmove_s((char *)v5 + 2 * a1, 2 * (v4 - a1), (char *)v7 + 2 * a1 + 2 * a3, 2 * (v3 - a3));
    sub_10001565(a2, a2[5] - a3);
  }
  return a2;
}

//----- (10001C6D) --------------------------------------------------------
_DWORD *__usercall sub_10001C6D@<eax>(_DWORD *a1@<esi>)
{
  *a1 = &off_100105BC;
  a1[1665] = 0;
  memset(a1 + 1, 0, 0x200u);
  memset(a1 + 129, 0, 0x200u);
  memset(a1 + 257, 0, 0x200u);
  memset(a1 + 385, 0, 0x200u);
  memset(a1 + 513, 0, 0x200u);
  memset(a1 + 641, 0, 0x200u);
  memset(a1 + 769, 0, 0x200u);
  memset(a1 + 897, 0, 0x200u);
  memset(a1 + 1025, 0, 0x200u);
  memset(a1 + 1153, 0, 0x200u);
  memset(a1 + 1281, 0, 0x200u);
  memset(a1 + 1409, 0, 0x200u);
  memset(a1 + 1537, 0, 0x200u);
  return a1;
}
// 100105BC: using guessed type int (__thiscall *off_100105BC)(void *Block, char);

//----- (10001D43) --------------------------------------------------------
_DWORD *__thiscall sub_10001D43(_DWORD *Block, char a2)
{
  sub_10001D5F(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}

//----- (10001D5F) --------------------------------------------------------
void __thiscall sub_10001D5F(_DWORD *this)
{
  void *v1; // ecx

  *this = &off_100105BC;
  v1 = (void *)this[1665];
  if ( v1 )
    j_j__free(v1);
}
// 100105BC: using guessed type int (__thiscall *off_100105BC)(void *Block, char);

//----- (10001D77) --------------------------------------------------------
errno_t __thiscall sub_10001D77(void **this, int a2)
{
  if ( this[1665] )
    j_j__free(this[1665]);
  memcpy_s(this + 1, 0x200u, (const void *const)(a2 + 4), 0x200u);
  memcpy_s(this + 129, 0x200u, (const void *const)(a2 + 516), 0x200u);
  memcpy_s(this + 257, 0x200u, (const void *const)(a2 + 1028), 0x200u);
  memcpy_s(this + 385, 0x200u, (const void *const)(a2 + 1540), 0x200u);
  memcpy_s(this + 513, 0x200u, (const void *const)(a2 + 2052), 0x200u);
  memcpy_s(this + 641, 0x200u, (const void *const)(a2 + 2564), 0x200u);
  memcpy_s(this + 769, 0x200u, (const void *const)(a2 + 3076), 0x200u);
  memcpy_s(this + 897, 0x200u, (const void *const)(a2 + 3588), 0x200u);
  memcpy_s(this + 1025, 0x200u, (const void *const)(a2 + 4100), 0x200u);
  memcpy_s(this + 1153, 0x200u, (const void *const)(a2 + 4612), 0x200u);
  memcpy_s(this + 1281, 0x200u, (const void *const)(a2 + 5124), 0x200u);
  memcpy_s(this + 1409, 0x200u, (const void *const)(a2 + 5636), 0x200u);
  return memcpy_s(this + 1537, 0x200u, (const void *const)(a2 + 6148), 0x200u);
}

//----- (10001EB3) --------------------------------------------------------
int __thiscall sub_10001EB3(char *this)
{
  const WCHAR *v1; // eax
  int v4; // edx
  int v5; // edx
  char v6; // [esp-20h] [ebp-40h] BYREF
  LPCWSTR v7; // [esp-1Ch] [ebp-3Ch]
  int v8; // [esp-18h] [ebp-38h]
  int v9; // [esp-14h] [ebp-34h]
  int v10; // [esp-10h] [ebp-30h]
  int v11; // [esp-Ch] [ebp-2Ch]
  unsigned int v12; // [esp-8h] [ebp-28h]
  char *v13; // [esp-4h] [ebp-24h]
  char *v14; // [esp+Ch] [ebp-14h]
  HKEY phkResult; // [esp+10h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  phkResult = 0;
  v1 = lpSubKey;
  if ( (unsigned int)dword_10013D48 < 8 )
    v1 = (const WCHAR *)&lpSubKey;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, v1, 0, 0x20019u, &phkResult) )
    return 2;
  v13 = this + 4;
  v14 = &v6;
  sub_10002448(dword_10013CC0, (int)&v6);
  v16 = -1;
  sub_100021D1(0x200u, v4, phkResult, v6, v7, v8, v9, v10, v11, v12, v13);
  v13 = this + 516;
  v14 = &v6;
  sub_10002448(dword_10013C88, (int)&v6);
  v16 = -1;
  sub_100021D1(0x200u, v5, phkResult, v6, v7, v8, v9, v10, v11, v12, v13);
  RegCloseKey(phkResult);
  return 0;
}
// 10001F23: variable 'v4' is possibly undefined
// 10001F51: variable 'v5' is possibly undefined
// 10013C88: using guessed type _DWORD dword_10013C88[7];
// 10013CC0: using guessed type _DWORD dword_10013CC0[7];
// 10013D48: using guessed type int dword_10013D48;

//----- (10001F70) --------------------------------------------------------
int __thiscall sub_10001F70(char *this)
{
  const WCHAR *v1; // eax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  char v15; // [esp-20h] [ebp-40h] BYREF
  LPCWSTR v16; // [esp-1Ch] [ebp-3Ch]
  int v17; // [esp-18h] [ebp-38h]
  int v18; // [esp-14h] [ebp-34h]
  int v19; // [esp-10h] [ebp-30h]
  int v20; // [esp-Ch] [ebp-2Ch]
  unsigned int v21; // [esp-8h] [ebp-28h]
  char *v22; // [esp-4h] [ebp-24h]
  char *v23; // [esp+Ch] [ebp-14h]
  HKEY phkResult; // [esp+10h] [ebp-10h] BYREF
  int v25; // [esp+1Ch] [ebp-4h]

  phkResult = 0;
  v1 = dword_10013C00;
  if ( (unsigned int)dword_10013C14 < 8 )
    v1 = (const WCHAR *)&dword_10013C00;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, v1, 0, 0x20019u, &phkResult) )
    return 2;
  v22 = this + 1028;
  v23 = &v15;
  sub_10002448(dword_10013C50, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v4, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 1540;
  v23 = &v15;
  sub_10002448(dword_10013C18, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v5, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 2052;
  v23 = &v15;
  sub_10002448(dword_10013BC4, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v6, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 2564;
  v23 = &v15;
  sub_10002448(dword_10013CA4, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v7, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 3076;
  v23 = &v15;
  sub_10002448(dword_10013D14, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v8, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 3588;
  v23 = &v15;
  sub_10002448(dword_10013BE0, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v9, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 4100;
  v23 = &v15;
  sub_10002448(dword_10013CDC, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v10, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 4612;
  v23 = &v15;
  sub_10002448(dword_10013C34, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v11, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 5124;
  v23 = &v15;
  sub_10002448(dword_10013C6C, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v12, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 5636;
  v23 = &v15;
  sub_10002448(dword_10013D4C, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v13, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  v22 = this + 6148;
  v23 = &v15;
  sub_10002448(dword_10013CF8, (int)&v15);
  v25 = -1;
  sub_100021D1(0x200u, v14, phkResult, v15, v16, v17, v18, v19, v20, v21, v22);
  RegCloseKey(phkResult);
  return 0;
}
// 10001FE6: variable 'v4' is possibly undefined
// 10002014: variable 'v5' is possibly undefined
// 10002042: variable 'v6' is possibly undefined
// 10002070: variable 'v7' is possibly undefined
// 1000209E: variable 'v8' is possibly undefined
// 100020CC: variable 'v9' is possibly undefined
// 100020FA: variable 'v10' is possibly undefined
// 10002128: variable 'v11' is possibly undefined
// 10002156: variable 'v12' is possibly undefined
// 10002184: variable 'v13' is possibly undefined
// 100021B2: variable 'v14' is possibly undefined
// 10013BC4: using guessed type _DWORD dword_10013BC4[7];
// 10013BE0: using guessed type _DWORD dword_10013BE0[7];
// 10013C14: using guessed type int dword_10013C14;
// 10013C18: using guessed type _DWORD dword_10013C18[7];
// 10013C34: using guessed type _DWORD dword_10013C34[7];
// 10013C50: using guessed type _DWORD dword_10013C50[7];
// 10013C6C: using guessed type _DWORD dword_10013C6C[7];
// 10013CA4: using guessed type _DWORD dword_10013CA4[7];
// 10013CDC: using guessed type _DWORD dword_10013CDC[7];
// 10013CF8: using guessed type _DWORD dword_10013CF8[7];
// 10013D14: using guessed type _DWORD dword_10013D14[7];
// 10013D4C: using guessed type _DWORD dword_10013D4C[7];

//----- (100021D1) --------------------------------------------------------
int __fastcall sub_100021D1(
        DWORD a1,
        int a2,
        HKEY hKey,
        char a4,
        LPCWSTR lpValueName,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10,
        char *a11)
{
  void *v12; // esi
  int v13; // edi
  const WCHAR *p_lpValueName; // eax
  DWORD cbData; // [esp+Ch] [ebp-10h] BYREF
  int v17; // [esp+18h] [ebp-4h]

  v17 = 0;
  cbData = a1;
  v12 = operator new((unsigned __int64)a1 >> 31 != 0 ? -1 : 2 * a1, (const struct std::nothrow_t *)&unk_100130D0);
  if ( v12 )
  {
    p_lpValueName = lpValueName;
    if ( a10 < 8 )
      p_lpValueName = (const WCHAR *)&lpValueName;
    if ( RegQueryValueExW(hKey, p_lpValueName, 0, 0, (LPBYTE)v12, &cbData) )
    {
      v13 = 4;
    }
    else
    {
      sub_100025CC((void *)a1, a11, v12, cbData);
      j_j__free(v12);
      v13 = 0;
    }
  }
  else
  {
    v13 = 1;
  }
  v17 = -1;
  sub_1000148D((int)&a4, 1, 0);
  return v13;
}

//----- (10002273) --------------------------------------------------------
void *__userpurge sub_10002273@<eax>(void **a1@<esi>, _DWORD *a2)
{
  void *v2; // eax

  if ( a1[1665] )
  {
    j_j__free(a1[1665]);
    a1[1665] = 0;
  }
  v2 = operator new(0x1A00u, (const struct std::nothrow_t *)&unk_100130D0);
  a1[1665] = v2;
  if ( v2 )
  {
    memcpy_s(v2, 0x1A00u, a1 + 1, 0x200u);
    memcpy_s((char *)a1[1665] + 512, 0x1800u, a1 + 129, 0x200u);
    memcpy_s((char *)a1[1665] + 1024, 0x1600u, a1 + 257, 0x200u);
    memcpy_s((char *)a1[1665] + 1536, 0x1400u, a1 + 385, 0x200u);
    memcpy_s((char *)a1[1665] + 2048, 0x1200u, a1 + 513, 0x200u);
    memcpy_s((char *)a1[1665] + 2560, 0x1000u, a1 + 641, 0x200u);
    memcpy_s((char *)a1[1665] + 3072, 0xE00u, a1 + 769, 0x200u);
    memcpy_s((char *)a1[1665] + 3584, 0xC00u, a1 + 897, 0x200u);
    memcpy_s((char *)a1[1665] + 4096, 0xA00u, a1 + 1025, 0x200u);
    memcpy_s((char *)a1[1665] + 4608, 0x800u, a1 + 1153, 0x200u);
    memcpy_s((char *)a1[1665] + 5120, 0x600u, a1 + 1281, 0x200u);
    memcpy_s((char *)a1[1665] + 5632, 0x400u, a1 + 1409, 0x200u);
    memcpy_s((char *)a1[1665] + 6144, 0x200u, a1 + 1537, 0x200u);
    *a2 = 6656;
    return a1[1665];
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}

//----- (10002448) --------------------------------------------------------
int __usercall sub_10002448@<eax>(_DWORD *a1@<eax>, int a2@<esi>)
{
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 7;
  *(_WORD *)(a2 + 4) = 0;
  sub_10001AE7(a1, 0, (_DWORD *)a2, 0xFFFFFFFF);
  return a2;
}

//----- (10002467) --------------------------------------------------------
_BYTE *__usercall sub_10002467@<eax>(_BYTE *a1@<eax>, int a2)
{
  _BYTE *result; // eax
  unsigned int v3; // esi
  char v4; // cl
  unsigned int i; // edi
  char v6; // dl

  if ( *a1 == 1 )
    return &a1[a2];
  v3 = (unsigned __int8)a1[2] + ((char)a1[1] << 8);
  *a1 = 1;
  result = &a1[a2];
  v4 = byte_10013045 ^ 0x47;
  for ( i = 0; i < v3; v4 = v6 )
  {
    v6 = result[i];
    result[i++] = v4 ^ v6;
  }
  return result;
}
// 10013045: using guessed type char byte_10013045;

//----- (100024AC) --------------------------------------------------------
DWORD __cdecl sub_100024AC(LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
{
  const WCHAR *v2; // eax
  HANDLE FileW; // esi
  DWORD LastError; // ebx
  char v6[4]; // [esp+Ch] [ebp-28h] BYREF
  LPCWSTR lpFileName[6]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+30h] [ebp-4h]

  sub_1000254B((int)v6);
  v8 = 0;
  v2 = lpFileName[0];
  if ( lpFileName[5] < (LPCWSTR)8 )
    v2 = (const WCHAR *)lpFileName;
  FileW = CreateFileW(v2, 0x40000000u, 5u, 0, 2u, 0, 0);
  if ( FileW == (HANDLE)-1 )
  {
    LastError = GetLastError();
  }
  else if ( WriteFile(FileW, lpBuffer, nNumberOfBytesToWrite, &nNumberOfBytesToWrite, 0) )
  {
    CloseHandle(FileW);
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
    CloseHandle(FileW);
  }
  v8 = -1;
  sub_1000148D((int)v6, 1, 0);
  return LastError;
}
// 100024AC: using guessed type char var_28[4];

//----- (1000254B) --------------------------------------------------------
int __cdecl sub_1000254B(int a1)
{
  const WCHAR *v1; // eax
  WCHAR Dst[262]; // [esp+0h] [ebp-21Ch] BYREF
  int v4; // [esp+20Ch] [ebp-10h]

  v4 = 0;
  memset(Dst, 0, 522);
  v1 = lpSrc;
  if ( (unsigned int)dword_10013BC0 < 8 )
    v1 = (const WCHAR *)&lpSrc;
  ExpandEnvironmentStringsW(v1, Dst, 0x105u);
  sub_10001ABB(a1, Dst);
  return a1;
}
// 10013BC0: using guessed type int dword_10013BC0;

//----- (100025CC) --------------------------------------------------------
void *__usercall sub_100025CC@<eax>(void *result@<eax>, char *a2@<ebx>, void *Source, rsize_t SourceSize)
{
  unsigned int v4; // esi
  rsize_t v5; // edi

  v4 = (unsigned int)result;
  if ( a2 && Source )
  {
    v5 = SourceSize;
    if ( SourceSize >= (unsigned int)result )
      v5 = (rsize_t)result;
    if ( SourceSize )
      result = (void *)memcpy_s(a2, (const rsize_t)result, Source, v5);
    if ( v5 < v4 )
      return memset(&a2[v5], 0, v4 - v5);
  }
  return result;
}

//----- (10002613) --------------------------------------------------------
int __cdecl sub_10002613(int a1, wchar_t *Format, va_list ArgList)
{
  wchar_t Buffer[1024]; // [esp+0h] [ebp-810h] BYREF
  int v5; // [esp+800h] [ebp-10h]

  v5 = 0;
  memset(Buffer, 0, sizeof(Buffer));
  _vsnwprintf_s(Buffer, 0x400u, 0x400u, Format, ArgList);
  sub_10001ABB(a1, Buffer);
  return a1;
}

//----- (10002687) --------------------------------------------------------
int sub_10002687(int a1, wchar_t *Format, ...)
{
  _DWORD *v2; // eax
  int v4[8]; // [esp+Ch] [ebp-2Ch] BYREF
  int v5; // [esp+34h] [ebp-4h]
  va_list va; // [esp+48h] [ebp+10h] BYREF

  va_start(va, Format);
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 4) = 0;
  v5 = 0;
  v4[7] = 1;
  v2 = (_DWORD *)sub_10002613((int)v4, Format, va);
  v5 = 1;
  sub_10001AE7(v2, 0, (_DWORD *)a1, 0xFFFFFFFF);
  LOBYTE(v5) = 0;
  sub_1000148D((int)v4, 1, 0);
  return a1;
}

//----- (10002744) --------------------------------------------------------
FARPROC __stdcall sub_10002744(int *a1, int *Arguments)
{
  int *v2; // esi
  int v3; // ebx
  char *v4; // edi
  const CHAR *v5; // ecx
  char *v6; // ebx
  char *v7; // edx
  bool v8; // zf
  HMODULE LibraryA; // edi
  int v11; // edx
  const CHAR *v12; // eax
  FARPROC ProcAddress; // ebx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16[3]; // [esp+Ch] [ebp-44h] BYREF
  LPCSTR lpLibFileName; // [esp+18h] [ebp-38h]
  BOOL v18; // [esp+1Ch] [ebp-34h]
  LPCSTR lpProcName; // [esp+20h] [ebp-30h]
  HMODULE v20; // [esp+24h] [ebp-2Ch]
  int (__stdcall *v21)(); // [esp+28h] [ebp-28h]
  DWORD LastError; // [esp+2Ch] [ebp-24h]
  volatile LONG *Target; // [esp+38h] [ebp-18h]
  char *v24; // [esp+44h] [ebp-Ch]
  int v25; // [esp+4Ch] [ebp-4h]

  v2 = a1;
  v3 = a1[3];
  v4 = (char *)&_ImageBase + a1[5];
  v5 = (char *)&_ImageBase + a1[1];
  Target = (volatile LONG *)((char *)&_ImageBase + a1[2]);
  v6 = (char *)&_ImageBase + v3;
  v7 = (char *)&_ImageBase + a1[4];
  v25 = a1[7];
  lpLibFileName = v5;
  v24 = v4;
  v16[2] = (int)Arguments;
  v8 = (*a1 & 1) == 0;
  v16[0] = 36;
  v16[1] = (int)a1;
  v18 = 0;
  lpProcName = 0;
  v20 = 0;
  v21 = 0;
  LastError = 0;
  if ( v8 )
  {
    Arguments = v16;
    RaiseException(0xC06D0057, 0, 1u, (const ULONG_PTR *)&Arguments);
    return 0;
  }
  LibraryA = (HMODULE)*Target;
  v11 = *(_DWORD *)&v7[4 * (((char *)Arguments - v6) >> 2)];
  a1 = (int *)(4 * (((char *)Arguments - v6) >> 2));
  v18 = v11 >= 0;
  v12 = (char *)&word_10000002 + v11;
  if ( v11 < 0 )
    v12 = (const CHAR *)(unsigned __int16)v11;
  lpProcName = v12;
  ProcAddress = 0;
  if ( !dword_100130CC || (ProcAddress = (FARPROC)dword_100130CC(0, v16)) == 0 )
  {
    if ( !LibraryA )
    {
      if ( !dword_100130CC || (LibraryA = (HMODULE)dword_100130CC(1, v16)) == 0 )
      {
        LibraryA = LoadLibraryA(lpLibFileName);
        if ( !LibraryA )
        {
          LastError = GetLastError();
          if ( !dword_100130C8 || (LibraryA = (HMODULE)dword_100130C8(3, v16)) == 0 )
          {
            Arguments = v16;
            RaiseException(0xC06D007E, 0, 1u, (const ULONG_PTR *)&Arguments);
            return v21;
          }
        }
      }
      if ( (HMODULE)InterlockedExchange(Target, (LONG)LibraryA) == LibraryA )
      {
        FreeLibrary(LibraryA);
      }
      else if ( v2[6] )
      {
        v14 = LocalAlloc(0x40u, 8u);
        if ( v14 )
        {
          v14[1] = v2;
          *v14 = dword_100130C4;
          dword_100130C4 = (int)v14;
        }
      }
    }
    v20 = LibraryA;
    if ( dword_100130CC )
      ProcAddress = (FARPROC)dword_100130CC(2, v16);
    if ( !ProcAddress )
    {
      if ( !v2[5]
        || !v2[7]
        || (v15 = (_DWORD *)((char *)LibraryA + *((_DWORD *)LibraryA + 15)), *v15 != 17744)
        || v15[2] != v25
        || LibraryA != (HMODULE)v15[13]
        || (ProcAddress = *(FARPROC *)&v24[(_DWORD)a1]) == 0 )
      {
        ProcAddress = GetProcAddress(LibraryA, lpProcName);
        if ( !ProcAddress )
        {
          LastError = GetLastError();
          if ( dword_100130C8 )
            ProcAddress = (FARPROC)dword_100130C8(4, v16);
          if ( !ProcAddress )
          {
            a1 = v16;
            RaiseException(0xC06D007F, 0, 1u, (const ULONG_PTR *)&a1);
            ProcAddress = v21;
          }
        }
      }
    }
    *Arguments = (int)ProcAddress;
  }
  if ( dword_100130CC )
  {
    LastError = 0;
    v20 = LibraryA;
    v21 = ProcAddress;
    dword_100130CC(5, v16);
  }
  return ProcAddress;
}
// 10000000: using guessed type __int16 _ImageBase;
// 10000002: using guessed type __int16 word_10000002;
// 100130C4: using guessed type int dword_100130C4;
// 100130C8: using guessed type int (__stdcall *dword_100130C8)(_DWORD, _DWORD);
// 100130CC: using guessed type int (__stdcall *dword_100130CC)(_DWORD, _DWORD);

//----- (10002BB0) --------------------------------------------------------
_DWORD *__thiscall sub_10002BB0(_DWORD *this, rsize_t a2)
{
  sub_10002F77(this);
  *this = &std::logic_error::`vftable';
  std::string::string(a2);
  return this;
}
// 10002B80: using guessed type _DWORD __stdcall std::string::string(rsize_t SourceSize);
// 1000E1F0: using guessed type void *std::logic_error::`vftable';

//----- (10002BF3) --------------------------------------------------------
void __thiscall sub_10002BF3(_DWORD *this)
{
  *this = &std::logic_error::`vftable';
  std::string::_Tidy(1, 0);
  sub_10003046(this);
}
// 1000E1F0: using guessed type void *std::logic_error::`vftable';

//----- (10002C10) --------------------------------------------------------
_DWORD *__thiscall sub_10002C10(_DWORD *Block, char a2)
{
  sub_10002BF3(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}

//----- (10002C2C) --------------------------------------------------------
void __thiscall sub_10002C2C(_DWORD *this)
{
  *this = &std::length_error::`vftable';
  sub_10002BF3(this);
}
// 1000E1FC: using guessed type void *std::length_error::`vftable';

//----- (10002C37) --------------------------------------------------------
_DWORD *__thiscall sub_10002C37(_DWORD *Block, char a2)
{
  *Block = &std::length_error::`vftable';
  sub_10002BF3(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
// 1000E1FC: using guessed type void *std::length_error::`vftable';

//----- (10002C59) --------------------------------------------------------
void __thiscall sub_10002C59(_DWORD *this)
{
  *this = &std::out_of_range::`vftable';
  sub_10002BF3(this);
}
// 1000E208: using guessed type void *std::out_of_range::`vftable';

//----- (10002C64) --------------------------------------------------------
_DWORD *__thiscall sub_10002C64(_DWORD *Block, char a2)
{
  *Block = &std::out_of_range::`vftable';
  sub_10002BF3(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
// 1000E208: using guessed type void *std::out_of_range::`vftable';

//----- (10002CC5) --------------------------------------------------------
std::exception *__thiscall sub_10002CC5(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((rsize_t)a2 + 12);
  return this;
}
// 10002B80: using guessed type _DWORD __stdcall std::string::string(rsize_t SourceSize);
// 1000E1F0: using guessed type void *std::logic_error::`vftable';

//----- (10002CFF) --------------------------------------------------------
std::exception *__thiscall sub_10002CFF(std::exception *this, struct std::exception *a2)
{
  sub_10002CC5(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}
// 1000E1FC: using guessed type void *std::length_error::`vftable';

//----- (10002E18) --------------------------------------------------------
std::exception *__thiscall sub_10002E18(std::exception *this, struct std::exception *a2)
{
  sub_10002CC5(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}
// 1000E208: using guessed type void *std::out_of_range::`vftable';

//----- (10002F77) --------------------------------------------------------
_DWORD *__thiscall sub_10002F77(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  this[2] = 0;
  *this = &std::exception::`vftable';
  return result;
}
// 1000E23C: using guessed type void *std::exception::`vftable';

//----- (10003046) --------------------------------------------------------
void __thiscall sub_10003046(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}
// 1000E23C: using guessed type void *std::exception::`vftable';

//----- (10003069) --------------------------------------------------------
void *__thiscall sub_10003069(void *Block, char a2)
{
  sub_10003046(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}

//----- (10003100) --------------------------------------------------------
void __thiscall sub_10003100(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}
// 1000E25C: using guessed type void *type_info::`vftable';

//----- (1000310E) --------------------------------------------------------
struct type_info *__thiscall sub_1000310E(struct type_info *Block, char a2)
{
  sub_10003100(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}

//----- (100043A5) --------------------------------------------------------
int __cdecl sub_100043A5(int a1)
{
  int result; // eax

  result = a1;
  dword_100130F8 = a1;
  return result;
}
// 100130F8: using guessed type int dword_100130F8;

//----- (10004648) --------------------------------------------------------
int __cdecl sub_10004648(int a1)
{
  int result; // eax

  result = a1;
  dword_10013104 = a1;
  return result;
}
// 10013104: using guessed type int dword_10013104;

//----- (10004EB8) --------------------------------------------------------
int __cdecl sub_10004EB8(_DWORD *a1)
{
  if ( a1 && dword_10013120 )
  {
    *a1 = dword_10013120;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}
// 100044AB: using guessed type int __cdecl _invalid_parameter(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10013120: using guessed type int dword_10013120;

//----- (10004EEF) --------------------------------------------------------
int __cdecl sub_10004EEF(_DWORD *a1)
{
  if ( a1 && dword_10013120 )
  {
    *a1 = dword_1001312C;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}
// 100044AB: using guessed type int __cdecl _invalid_parameter(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10013120: using guessed type int dword_10013120;
// 1001312C: using guessed type int dword_1001312C;

//----- (10006A23) --------------------------------------------------------
void *sub_10006A23()
{
  return &unk_100108A8;
}

//----- (10006A47) --------------------------------------------------------
void __cdecl sub_10006A47()
{
  ;
}

//----- (10006DA2) --------------------------------------------------------
void __thiscall sub_10006DA2(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_10003046(this);
}
// 1000E30C: using guessed type void *std::bad_exception::`vftable';

//----- (10006DAD) --------------------------------------------------------
_DWORD *__thiscall sub_10006DAD(_DWORD *Block, char a2)
{
  *Block = &std::bad_exception::`vftable';
  sub_10003046(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
// 1000E30C: using guessed type void *std::bad_exception::`vftable';

//----- (10007930) --------------------------------------------------------
std::exception *__thiscall sub_10007930(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}
// 1000E30C: using guessed type void *std::bad_exception::`vftable';

//----- (10008BF9) --------------------------------------------------------
void sub_10008BF9()
{
  dword_10014EA4 = 0;
}
// 10014EA4: using guessed type int dword_10014EA4;

//----- (10009AA8) --------------------------------------------------------
int sub_10009AA8()
{
  return _decode_pointer(dword_10013A9C);
}
// 10004757: using guessed type _DWORD __cdecl _decode_pointer(_DWORD);
// 10013A9C: using guessed type int dword_10013A9C;

//----- (10009C65) --------------------------------------------------------
int __cdecl sub_10009C65(int a1)
{
  int result; // eax

  result = a1;
  dword_10013AA8 = a1;
  return result;
}
// 10013AA8: using guessed type int dword_10013AA8;

//----- (10009C6F) --------------------------------------------------------
int __cdecl sub_10009C6F(int a1)
{
  int result; // eax

  result = a1;
  dword_10013AB4 = a1;
  return result;
}
// 10013AB4: using guessed type int dword_10013AB4;

//----- (10009C79) --------------------------------------------------------
int __cdecl sub_10009C79(int a1)
{
  int result; // eax

  result = a1;
  dword_10013AB8 = a1;
  return result;
}
// 10013AB8: using guessed type int dword_10013AB8;

//----- (10009F5B) --------------------------------------------------------
int sub_10009F5B()
{
  dword_10014FE4 = _get_sse2_info();
  return 0;
}
// 10009EFB: using guessed type int _get_sse2_info(void);
// 10014FE4: using guessed type int dword_10014FE4;

//----- (1000A848) --------------------------------------------------------
void **sub_1000A848()
{
  return &off_10012B38;
}
// 10012B38: using guessed type void *off_10012B38;

//----- (1000B0B3) --------------------------------------------------------
int __cdecl sub_1000B0B3(int a1, int a2, int a3)
{
  HMODULE LibraryA; // eax
  HMODULE v4; // edi
  int (__stdcall *MessageBoxA)(HWND, LPCSTR, LPCSTR, UINT); // eax
  HWND (__stdcall *GetActiveWindow)(); // eax
  HWND (__stdcall *GetLastActivePopup)(HWND); // eax
  BOOL (__stdcall *GetUserObjectInformationA)(HANDLE, int, PVOID, DWORD, LPDWORD); // eax
  HWINSTA (__stdcall *GetProcessWindowStation)(); // eax
  int (*v10)(void); // esi
  int (__stdcall *v11)(int, int, char *, int, char *); // eax
  int (__stdcall *v12)(int, int, char *, int, char *); // edi
  int v13; // eax
  int (*v14)(void); // eax
  int (__stdcall *v15)(int); // eax
  int (__stdcall *v16)(int, int, int, int); // eax
  char v18[12]; // [esp+10h] [ebp-20h] BYREF
  char v19[4]; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v20; // [esp+20h] [ebp-10h] BYREF
  int v21; // [esp+24h] [ebp-Ch] BYREF
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  v22 = _encoded_null();
  v23 = 0;
  v21 = 0;
  v20 = 0;
  if ( !dword_10013AC4 )
  {
    LibraryA = LoadLibraryA(LibFileName);
    v4 = LibraryA;
    if ( !LibraryA )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, aMessageboxa);
    if ( !MessageBoxA )
      return 0;
    dword_10013AC4 = _encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v4, aGetactivewindo);
    dword_10013AC8 = _encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v4, aGetlastactivep);
    dword_10013ACC = _encode_pointer(GetLastActivePopup);
    if ( sub_10004EB8(&v21) )
      _invoke_watson(0, 0, 0, 0, 0);
    if ( v21 == 2 )
    {
      GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                            v4,
                                                                                            aGetuserobjecti);
      dword_10013AD4 = _encode_pointer(GetUserObjectInformationA);
      if ( dword_10013AD4 )
      {
        GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v4, aGetprocesswind);
        dword_10013AD0 = _encode_pointer(GetProcessWindowStation);
      }
    }
  }
  if ( dword_10013AD0 == v22
    || dword_10013AD4 == v22
    || (v10 = (int (*)(void))_decode_pointer(dword_10013AD0),
        v11 = (int (__stdcall *)(int, int, char *, int, char *))_decode_pointer(dword_10013AD4),
        v12 = v11,
        !v10)
    || !v11
    || (v13 = v10()) != 0 && v12(v13, 1, v18, 12, v19) && (v18[8] & 1) != 0 )
  {
    if ( dword_10013AC8 != v22 )
    {
      v14 = (int (*)(void))_decode_pointer(dword_10013AC8);
      if ( v14 )
      {
        v23 = v14();
        if ( v23 )
        {
          if ( dword_10013ACC != v22 )
          {
            v15 = (int (__stdcall *)(int))_decode_pointer(dword_10013ACC);
            if ( v15 )
              v23 = v15(v23);
          }
        }
      }
    }
  }
  else
  {
    if ( sub_10004EEF(&v20) )
      _invoke_watson(0, 0, 0, 0, 0);
    if ( v20 < 4 )
      a3 |= 0x40000u;
    else
      a3 |= 0x200000u;
  }
  v16 = (int (__stdcall *)(int, int, int, int))_decode_pointer(dword_10013AC4);
  if ( v16 )
    return v16(v23, a1, a2, a3);
  return 0;
}
// 100046E0: using guessed type _DWORD __cdecl _encode_pointer(_DWORD);
// 1000474E: using guessed type int _encoded_null(void);
// 10004757: using guessed type _DWORD __cdecl _decode_pointer(_DWORD);
// 10004EB8: using guessed type _DWORD __cdecl sub_10004EB8(_DWORD);
// 10004EEF: using guessed type _DWORD __cdecl sub_10004EEF(_DWORD);
// 10013AC4: using guessed type int dword_10013AC4;
// 10013AC8: using guessed type int dword_10013AC8;
// 10013ACC: using guessed type int dword_10013ACC;
// 10013AD0: using guessed type int dword_10013AD0;
// 10013AD4: using guessed type int dword_10013AD4;
// 1000B0B3: using guessed type char var_14[4];

//----- (1000C1A1) --------------------------------------------------------
int sub_1000C1A1()
{
  return flsall(1);
}
// 1000C0C7: using guessed type _DWORD __cdecl flsall(_DWORD);

//----- (1000D7DC) --------------------------------------------------------
int sub_1000D7DC()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(26);
  sub_10001ABB(v0);
  return atexit(sub_1000DA1C);
}
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);

//----- (1000D800) --------------------------------------------------------
int sub_1000D800()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(26);
  sub_10001ABB(v0);
  return atexit(sub_1000DA2D);
}
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);

//----- (1000D824) --------------------------------------------------------
int sub_1000D824()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FC28, 26);
  sub_10001ABB((int)dword_10013CC0, v0);
  return atexit(sub_1000DA3E);
}
// 1000FC28: using guessed type _BYTE byte_1000FC28[88];
// 10013CC0: using guessed type _DWORD dword_10013CC0[7];

//----- (1000D848) --------------------------------------------------------
int sub_1000D848()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(26);
  sub_10001ABB(v0);
  return atexit(sub_1000DA4F);
}
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);

//----- (1000D86C) --------------------------------------------------------
int sub_1000D86C()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FCD0, 26);
  sub_10001ABB((int)&unk_10013BFC, v0);
  return atexit(sub_1000DA60);
}
// 1000FCD0: using guessed type _BYTE byte_1000FCD0[116];

//----- (1000D890) --------------------------------------------------------
int sub_1000D890()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FD48, 26);
  sub_10001ABB((int)dword_10013C50, v0);
  return atexit(sub_1000DA71);
}
// 1000FD48: using guessed type _BYTE byte_1000FD48[72];
// 10013C50: using guessed type _DWORD dword_10013C50[7];

//----- (1000D8B4) --------------------------------------------------------
int sub_1000D8B4()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FD90, 26);
  sub_10001ABB((int)dword_10013C18, v0);
  return atexit(sub_1000DA82);
}
// 1000FD90: using guessed type _BYTE byte_1000FD90[80];
// 10013C18: using guessed type _DWORD dword_10013C18[7];

//----- (1000D8D8) --------------------------------------------------------
int sub_1000D8D8()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FDE0, 26);
  sub_10001ABB((int)dword_10013BC4, v0);
  return atexit(sub_1000DA93);
}
// 1000FDE0: using guessed type _BYTE byte_1000FDE0[88];
// 10013BC4: using guessed type _DWORD dword_10013BC4[7];

//----- (1000D8FC) --------------------------------------------------------
int sub_1000D8FC()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(26);
  sub_10001ABB(v0);
  return atexit(sub_1000DAA4);
}
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);

//----- (1000D920) --------------------------------------------------------
int sub_1000D920()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FE98, 26);
  sub_10001ABB((int)dword_10013D14, v0);
  return atexit(sub_1000DAB5);
}
// 1000FE98: using guessed type _BYTE byte_1000FE98[88];
// 10013D14: using guessed type _DWORD dword_10013D14[7];

//----- (1000D944) --------------------------------------------------------
int sub_1000D944()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FEF0, 26);
  sub_10001ABB((int)dword_10013BE0, v0);
  return atexit(sub_1000DAC6);
}
// 1000FEF0: using guessed type _BYTE byte_1000FEF0[84];
// 10013BE0: using guessed type _DWORD dword_10013BE0[7];

//----- (1000D968) --------------------------------------------------------
int sub_1000D968()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(26);
  sub_10001ABB(v0);
  return atexit(sub_1000DAD7);
}
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);

//----- (1000D98C) --------------------------------------------------------
int sub_1000D98C()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_1000FFC8, 26);
  sub_10001ABB((int)dword_10013C34, v0);
  return atexit(sub_1000DAE8);
}
// 1000FFC8: using guessed type _BYTE byte_1000FFC8[88];
// 10013C34: using guessed type _DWORD dword_10013C34[7];

//----- (1000D9B0) --------------------------------------------------------
int sub_1000D9B0()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_10010020, 26);
  sub_10001ABB((int)dword_10013C6C, v0);
  return atexit(sub_1000DAF9);
}
// 10010020: using guessed type _BYTE byte_10010020[88];
// 10013C6C: using guessed type _DWORD dword_10013C6C[7];

//----- (1000D9D4) --------------------------------------------------------
int sub_1000D9D4()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(26);
  sub_10001ABB(v0);
  return atexit(sub_1000DB0A);
}
// 10002467: using guessed type _DWORD __cdecl sub_10002467(_DWORD);

//----- (1000D9F8) --------------------------------------------------------
int sub_1000D9F8()
{
  wchar_t *v0; // eax

  v0 = (wchar_t *)sub_10002467(byte_100100C0, 26);
  sub_10001ABB((int)dword_10013CF8, v0);
  return atexit(sub_1000DB1B);
}
// 100100C0: using guessed type _BYTE byte_100100C0[80];
// 10013CF8: using guessed type _DWORD dword_10013CF8[7];

//----- (1000DA1C) --------------------------------------------------------
void __cdecl sub_1000DA1C()
{
  sub_1000148D((int)&unk_10013BA8, 1, 0);
}

//----- (1000DA2D) --------------------------------------------------------
void __cdecl sub_1000DA2D()
{
  sub_1000148D((int)&unk_10013D30, 1, 0);
}

//----- (1000DA3E) --------------------------------------------------------
void __cdecl sub_1000DA3E()
{
  sub_1000148D((int)dword_10013CC0, 1, 0);
}
// 10013CC0: using guessed type _DWORD dword_10013CC0[7];

//----- (1000DA4F) --------------------------------------------------------
void __cdecl sub_1000DA4F()
{
  sub_1000148D((int)dword_10013C88, 1, 0);
}
// 10013C88: using guessed type _DWORD dword_10013C88[7];

//----- (1000DA60) --------------------------------------------------------
void __cdecl sub_1000DA60()
{
  sub_1000148D((int)&unk_10013BFC, 1, 0);
}

//----- (1000DA71) --------------------------------------------------------
void __cdecl sub_1000DA71()
{
  sub_1000148D((int)dword_10013C50, 1, 0);
}
// 10013C50: using guessed type _DWORD dword_10013C50[7];

//----- (1000DA82) --------------------------------------------------------
void __cdecl sub_1000DA82()
{
  sub_1000148D((int)dword_10013C18, 1, 0);
}
// 10013C18: using guessed type _DWORD dword_10013C18[7];

//----- (1000DA93) --------------------------------------------------------
void __cdecl sub_1000DA93()
{
  sub_1000148D((int)dword_10013BC4, 1, 0);
}
// 10013BC4: using guessed type _DWORD dword_10013BC4[7];

//----- (1000DAA4) --------------------------------------------------------
void __cdecl sub_1000DAA4()
{
  sub_1000148D((int)dword_10013CA4, 1, 0);
}
// 10013CA4: using guessed type _DWORD dword_10013CA4[7];

//----- (1000DAB5) --------------------------------------------------------
void __cdecl sub_1000DAB5()
{
  sub_1000148D((int)dword_10013D14, 1, 0);
}
// 10013D14: using guessed type _DWORD dword_10013D14[7];

//----- (1000DAC6) --------------------------------------------------------
void __cdecl sub_1000DAC6()
{
  sub_1000148D((int)dword_10013BE0, 1, 0);
}
// 10013BE0: using guessed type _DWORD dword_10013BE0[7];

//----- (1000DAD7) --------------------------------------------------------
void __cdecl sub_1000DAD7()
{
  sub_1000148D((int)dword_10013CDC, 1, 0);
}
// 10013CDC: using guessed type _DWORD dword_10013CDC[7];

//----- (1000DAE8) --------------------------------------------------------
void __cdecl sub_1000DAE8()
{
  sub_1000148D((int)&dword_10013C34, 1, 0);
}

//----- (1000DAF9) --------------------------------------------------------
void __cdecl sub_1000DAF9()
{
  sub_1000148D((int)dword_10013C6C, 1, 0);
}
// 10013C6C: using guessed type _DWORD dword_10013C6C[7];

//----- (1000DB0A) --------------------------------------------------------
void __cdecl sub_1000DB0A()
{
  sub_1000148D((int)dword_10013D4C, 1, 0);
}
// 10013D4C: using guessed type _DWORD dword_10013D4C[7];

//----- (1000DB1B) --------------------------------------------------------
void __cdecl sub_1000DB1B()
{
  sub_1000148D((int)&dword_10013CF8, 1, 0);
}

//----- (1000DB2C) --------------------------------------------------------
void __cdecl sub_1000DB2C(int a1)
{
  dword_100130D4 = &std::bad_alloc::`vftable';
  sub_10003046(a1);
}
// 10003046: using guessed type int __cdecl sub_10003046(_DWORD);
// 1000E1E4: using guessed type void *std::bad_alloc::`vftable';

// nfuncs=395 queued=110 decompiled=110 lumina nreq=0 worse=0 better=0
// ALL OK, 110 function(s) have been successfully decompiled
