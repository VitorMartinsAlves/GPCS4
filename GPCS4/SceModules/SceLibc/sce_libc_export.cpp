#include "sce_libc.h"


// Note:
// The codebase is generated using GenerateCode.py
// You may need to modify the code manually to fit development needs


static const SCE_EXPORT_FUNCTION g_pSceLibc_libc_FunctionTable[] =
{
	{ 0x3F7DF43F774517AF, "Need_sceLibc", (void*)scec_Need_sceLibc },
	{ 0x29E399D7D5FCFD48, "_Cosh", (void*)scec__Cosh },
	{ 0x9A7B9F3E561B9CDD, "_FDtest", (void*)scec__FDtest },
	{ 0x8E38D14BB97530F3, "_FLog", (void*)scec__FLog },
	{ 0x66D8ECA64250FAFC, "_FSin", (void*)scec__FSin },
	{ 0x539D8194706F62F1, "_Getmbcurmax", (void*)scec__Getmbcurmax },
	{ 0xB143F58416A8B8EC, "_Getpctype", (void*)scec__Getpctype },
	{ 0xD6E260A15AB76D05, "_Getptolower", (void*)scec__Getptolower },
	{ 0xADC40252BD046915, "_Getptoupper", (void*)scec__Getptoupper },
	{ 0xCD70A2EFC6D8AC42, "_Log", (void*)scec__Log },
	{ 0x7025E353BD99D0EC, "_Sin", (void*)scec__Sin },
	{ 0x314DB97AAC520D3C, "_Sinh", (void*)scec__Sinh },
	{ 0x1FC029ACA799B4D8, "_Stderr", (void*)scec__Stderr },
	{ 0xDAC5B3858A851F81, "_Stdout", (void*)scec__Stdout },
	{ 0xCE57C41FC166C940, "_Stoul", (void*)scec__Stoul },
	{ 0xABEF44D17DDA5A95, "_Stoull", (void*)scec__Stoull },
	{ 0xB50228F8620F925A, "_ZSt14_Xlength_errorPKc", (void*)scec__ZSt14_Xlength_errorPKc },
	{ 0xA33300AF6F01C126, "_ZSt14_Xout_of_rangePKc", (void*)scec__ZSt14_Xout_of_rangePKc },
	{ 0xB6CBC49A77A7CF8F, "__cxa_atexit", (void*)scec___cxa_atexit },
	{ 0xDC63E98D0740313C, "__cxa_guard_acquire", (void*)scec___cxa_guard_acquire },
	{ 0xF6B01E00D4F6B721, "__cxa_guard_release", (void*)scec___cxa_guard_release },
	{ 0xCEBD3DE04437F56C, "__cxa_pure_virtual", (void*)scec___cxa_pure_virtual },
	{ 0x7612B5E822B08508, "__isfinite", (void*)scec___isfinite },
	{ 0x43CA6F2629945A2B, "__isfinitef", (void*)scec___isfinitef },
	{ 0xDFFCC20D76AD494E, "__isfinitel", (void*)scec___isfinitel },
	{ 0x574DA816FFBF2730, "__isinf", (void*)scec___isinf },
	{ 0x19FC40A7D5F28AAB, "__isnan", (void*)scec___isnan },
	{ 0x0A3F352CF12B3C27, "__signbitl", (void*)scec___signbitl },
	{ 0x6F3404C72D7CF592, "_init_env", (void*)scec_init_env },
	{ 0x2F54814E40BE0AFC, "abort", (void*)scec_abort },
	{ 0x24172062E5BC94F5, "acos", (void*)scec_acos },
	{ 0x408FF1D122FC8E1C, "acosf", (void*)scec_acosf },
	{ 0x164EFF2852998BFF, "acosh", (void*)scec_acosh },
	{ 0xECBCB9DB368BE384, "asin", (void*)scec_asin },
	{ 0x1995A317F6081459, "asinf", (void*)scec_asinf },
	{ 0xD9E429A938C9E58E, "asinh", (void*)scec_asinh },
	{ 0x39799AB8B750F246, "atan", (void*)scec_atan },
	{ 0x1D46D998E9D3FC38, "atan2", (void*)scec_atan2 },
	{ 0x107FF1EF5DC0F7D7, "atan2f", (void*)scec_atan2f },
	{ 0x6236E9C57A62E999, "atanh", (void*)scec_atanh },
	{ 0xF06D8B07E037AF38, "atexit", (void*)scec_atexit },
	{ 0x49123A4BD07EFDAE, "atof", (void*)scec_atof },
	{ 0x35EB0881399F1744, "bsearch", (void*)scec_bsearch },
	{ 0x5CA45E82C1691299, "catchReturnFromMain", (void*)scec_catchReturnFromMain },
	{ 0xE599043F746AEC0B, "cbrt", (void*)scec_cbrt },
	{ 0xDA06DC96D937B301, "div", (void*)scec_div },
	{ 0xA1781AA865675B9A, "erf", (void*)scec_erf },
	{ 0x6AB20A2E57A7DAC8, "erfc", (void*)scec_erfc },
	{ 0xB8C7A2D56F6EC8DA, "exit", (void*)scec_exit },
	{ 0x35569D7E7CD08474, "exp", (void*)scec_exp },
	{ 0x76769E1976E33FA1, "exp2", (void*)scec_exp2 },
	{ 0xC2E010B7F8FEA78A, "exp2f", (void*)scec_exp2f },
	{ 0xF33B2ED385CDB19E, "expf", (void*)scec_expf },
	{ 0xBA874B632522A76D, "fclose", (void*)scec_fclose },
	{ 0x2F170453E202BBC5, "feof", (void*)scec_feof },
	{ 0x004B85DC5D9FF130, "fgetc", (void*)scec_fgetc },
	{ 0xA4AC2C96C3149929, "fmod", (void*)scec_fmod },
	{ 0xF3C56FFC0CC7563F, "fmodf", (void*)scec_fmodf },
	{ 0xC5E60EE2EEEEC89D, "fopen", (void*)scec_fopen },
	{ 0x7DF7F010B5CD5450, "fprintf", (void*)scec_fprintf },
	{ 0x6992BC94D7A2FD0C, "fputc", (void*)scec_fputc },
	{ 0x42B659749F17B17D, "fputs", (void*)scec_fputs },
	{ 0x95B07E52566A546D, "fread", (void*)scec_fread },
	{ 0xB4886CAA3D2AB051, "free", (void*)scec_free },
	{ 0x900FD3762382B1A6, "frexp", (void*)scec_frexp },
	{ 0xAD0155057A7F0B18, "fseek", (void*)scec_fseek },
	{ 0x41ACF2F0B9974EFC, "ftell", (void*)scec_ftell },
	{ 0x329C61321F1016BA, "fwrite", (void*)scec_fwrite },
	{ 0x605A0EC391A490AD, "hypot", (void*)scec_hypot },
	{ 0x26BC0520CCCA36BD, "ldexp", (void*)scec_ldexp },
	{ 0x94A10DD8879B809D, "longjmp", (void*)scec_longjmp },
	{ 0x8105FEE060D08E93, "malloc", (void*)scec_malloc },
	{ 0x85EC347D1788D87D, "mblen", (void*)scec_mblen },
	{ 0xF21CA0B3A0FD2816, "mbsrtowcs", (void*)scec_mbsrtowcs },
	{ 0xB5D700AA0092FAE2, "mbstowcs_s", (void*)scec_mbstowcs_s },
	{ 0xF2EF253F3504ABE5, "memchr", (void*)scec_memchr },
	{ 0x0DF8AF3C0AE1B9C8, "memcmp", (void*)scec_memcmp },
	{ 0x437541C425E1507B, "memcpy", (void*)scec_memcpy },
	{ 0x3452ECF9D44918D8, "memcpy_s", (void*)scec_memcpy_s },
	{ 0xF8FE854461F82DF0, "memmove", (void*)scec_memmove },
	{ 0xF334C5BC120020DF, "memset", (void*)scec_memset },
	{ 0xD163070DBE43B7DE, "modf", (void*)scec_modf },
	{ 0xDFE50F33FF44EB16, "modff", (void*)scec_modff },
	{ 0xF4B0A3A56C90E597, "pow", (void*)scec_pow },
	{ 0xD43D07D8A363B211, "powf", (void*)scec_powf },
	{ 0x85CB90803E775313, "printf", (void*)scec_printf },
	{ 0xB4B079FB84C438AD, "putc", (void*)scec_putc },
	{ 0x9B9C0DF92C19391E, "putchar", (void*)scec_putchar },
	{ 0x610D276AFA7E6087, "puts", (void*)scec_puts },
	{ 0x00425D215653126A, "qsort", (void*)scec_qsort },
	{ 0x72908E5D632085AD, "rand", (void*)scec_rand },
	{ 0x63B689D6EC9D3CCA, "realloc", (void*)scec_realloc },
	{ 0x2D8A371A1225077F, "sceLibcMspaceCalloc", (void*)scec_sceLibcMspaceCalloc },
	{ 0xFE19F5B5C547AB94, "sceLibcMspaceCreate", (void*)scec_sceLibcMspaceCreate },
	{ 0x5BA4A25528820ED2, "sceLibcMspaceDestroy", (void*)scec_sceLibcMspaceDestroy },
	{ 0x5656BF67E797971A, "sceLibcMspaceFree", (void*)scec_sceLibcMspaceFree },
	{ 0x3898E6FD03881E52, "sceLibcMspaceMalloc", (void*)scec_sceLibcMspaceMalloc },
	{ 0x99F1DD25322F86EA, "sceLibcMspaceMallocStats", (void*)scec_sceLibcMspaceMallocStats },
	{ 0x934E232D7BB7F887, "sceLibcMspaceMallocStatsFast", (void*)scec_sceLibcMspaceMallocStatsFast },
	{ 0x7C4A16E8126C3EDE, "sceLibcMspaceMallocUsableSize", (void*)scec_sceLibcMspaceMallocUsableSize },
	{ 0x885D62407CF10495, "sceLibcMspaceMemalign", (void*)scec_sceLibcMspaceMemalign },
	{ 0xA961129725CC2371, "sceLibcMspacePosixMemalign", (void*)scec_sceLibcMspacePosixMemalign },
	{ 0x82282854766F54F1, "sceLibcMspaceRealloc", (void*)scec_sceLibcMspaceRealloc },
	{ 0xA7A96B456F3F30B6, "sceLibcMspaceReallocalign", (void*)scec_sceLibcMspaceReallocalign },
	{ 0x80D435576BDF5C31, "setjmp", (void*)scec_setjmp },
	{ 0x78B743C3A974FDB5, "snprintf", (void*)scec_snprintf },
	{ 0xB5C562E528AF17B4, "sprintf", (void*)scec_sprintf },
	{ 0xC44B332551A9C9BB, "sprintf_s", (void*)scec_sprintf_s },
	{ 0xD4F934A99406796A, "sscanf", (void*)scec_sscanf },
	{ 0xDB89B86786D46A86, "sscanf_s", (void*)scec_sscanf_s },
	{ 0x015EA2A4235AE11C, "strcasecmp", (void*)scec_strcasecmp },
	{ 0x2ECE2DCF38629AA4, "strcat", (void*)scec_strcat },
	{ 0x2BE81C9C51492957, "strcat_s", (void*)scec_strcat_s },
	{ 0xA1BE71016E259FFD, "strchr", (void*)scec_strchr },
	{ 0x3AF6F675224E02E1, "strcmp", (void*)scec_strcmp },
	{ 0x9226525C859DF6F8, "strcpy", (void*)scec_strcpy },
	{ 0xE576B600234409DA, "strcpy_s", (void*)scec_strcpy_s },
	{ 0x8F856258D1C4830C, "strlen", (void*)scec_strlen },
	{ 0xA57BDB0DF721BBA9, "strncasecmp", (void*)scec_strncasecmp },
	{ 0x907838E6A3C2E9FD, "strncat", (void*)scec_strncat },
	{ 0x69EB328EB1D55B2E, "strncmp", (void*)scec_strncmp },
	{ 0xEAC256896491BAA9, "strncpy", (void*)scec_strncpy },
	{ 0x60DCCD909CD8A848, "strncpy_s", (void*)scec_strncpy_s },
	{ 0x0D06ED19A04A95AC, "strnlen_s", (void*)scec_strnlen_s },
	{ 0xF720D63311057495, "strrchr", (void*)scec_strrchr },
	{ 0xBE28B014C68D6A60, "strstr", (void*)scec_strstr },
	{ 0xDAF0EAC0196917FA, "strtod", (void*)scec_strtod },
	{ 0xA15919F16F3F43C0, "strtok", (void*)scec_strtok },
	{ 0x9979718662CD30F8, "strtol", (void*)scec_strtol },
	{ 0x226E79549FC17A47, "swprintf_s", (void*)scec_swprintf_s },
	{ 0x4FBBB236A3FBBD00, "tan", (void*)scec_tan },
	{ 0x644E9134BF9E2DB9, "tanf", (void*)scec_tanf },
	{ 0x24CE0406F593F6B7, "tanh", (void*)scec_tanh },
	{ 0xC0B9459301BD51C4, "time", (void*)scec_time },
	{ 0x43657E8AABE3802D, "vsnprintf", (void*)scec_vsnprintf },
	{ 0x8DBCFD23DBE4AA49, "vsprintf", (void*)scec_vsprintf },
	{ 0xFAA8AD3046E44969, "vsprintf_s", (void*)scec_vsprintf_s },
	{ 0x32A78C695522C94F, "wcscat_s", (void*)scec_wcscat_s },
	{ 0x133CEAEFC6601CFB, "wcschr", (void*)scec_wcschr },
	{ 0xA4DB49744DF1E3D1, "wcscmp", (void*)scec_wcscmp },
	{ 0xE9FE5FFEAC78B9C0, "wcscpy_s", (void*)scec_wcscpy_s },
	{ 0x5A491ECB02C97205, "wcslen", (void*)scec_wcslen },
	{ 0x5711B4F7DD2D3F71, "wcsncat_s", (void*)scec_wcsncat_s },
	{ 0x13CC02A1411B7F39, "wcsncmp", (void*)scec_wcsncmp },
	{ 0x4A59B3E07329346B, "wcsncpy_s", (void*)scec_wcsncpy_s },
	{ 0x2BEBFE727986A07E, "wcsnlen_s", (void*)scec_wcsnlen_s },
	{ 0xB0E38C959A32D698, "wcsrtombs", (void*)scec_wcsrtombs },
	{ 0x583A686E322601BE, "wcsstr", (void*)scec_wcsstr },
	{ 0xB192EB8F1FF2131E, "wcstombs_s", (void*)scec_wcstombs_s },
	{ 0xD530E8FC89AA9097, "_Stdin", (void*)scec__Stdin },
	{ 0x793D94B264DEC1B5, "_ZSt11_Xbad_allocv", (void*)scec__ZSt11_Xbad_allocv },
	{ 0x34BC09DEAFBAE1B6, "_ZSt7nothrow", (void*)scec__ZSt7nothrow },
	{ 0x007C7284DF7A772E, "ferror", (void*)scec_ferror },
	{ 0x3148C2E256C7ACAE, "fflush", (void*)scec_fflush },
	{ 0x29D3FF9D42E9B86C, "fgets", (void*)scec_fgets },
	{ 0x8245A09F4A7501F5, "freopen", (void*)scec_freopen },
	{ 0xF10EB424B27A46FE, "getc", (void*)scec_getc },
	{ 0xD2195F5B53B801AE, "localeconv", (void*)scec_localeconv },
	{ 0x79F84AFD84946184, "localtime", (void*)scec_localtime },
	{ 0x554CE35E49CF3C1B, "mbstowcs", (void*)scec_mbstowcs },
	{ 0x5237F72B332F4662, "memalign", (void*)scec_memalign },
	{ 0x386C9B56E3C08406, "reallocalign", (void*)scec_reallocalign },
	{ 0x28628179572A2637, "scalbn", (void*)scec_scalbn },
	{ 0xF5FB356ED7CBA14B, "scalbnf", (void*)scec_scalbnf },
	{ 0x10D2DF2891194E31, "set_constraint_handler_s", (void*)scec_set_constraint_handler_s },
	{ 0x40C1722E8A8DC488, "setvbuf", (void*)scec_setvbuf },
	{ 0xDC1CAD3CE42054A7, "snprintf_s", (void*)scec_snprintf_s },
	{ 0x54F6C9C130A0304D, "srand", (void*)scec_srand },
	{ 0x8236E66293FF5C94, "strcoll", (void*)scec_strcoll },
	{ 0x83BCF3CCB0D81B0D, "strdup", (void*)scec_strdup },
	{ 0x4486BA1A75A9FA25, "strerror", (void*)scec_strerror },
	{ 0x90366FA15B2C0A04, "strpbrk", (void*)scec_strpbrk },
	{ 0xFE453A6C1E0CFFE9, "strspn", (void*)scec_strspn },
	{ 0xD27576D498D8087F, "wcsncpy", (void*)scec_wcsncpy },
	{ 0xBFB4BB2E13F63897, "wcstombs", (void*)scec_wcstombs },
	SCE_FUNCTION_ENTRY_END
};

static const SCE_EXPORT_FUNCTION g_pSceLibc_libc_setjmp_FunctionTable[] =
{
	{ 0xF85FBD8618BA93D4, "_longjmp", (void*)_longjmp },
	{ 0xB23A64AE1BA0BD52, "_setjmp", (void*)_setjmp },
	SCE_FUNCTION_ENTRY_END
};

static const SCE_EXPORT_LIBRARY g_pSceLibc_LibTable[] =
{
	{ "libc", g_pSceLibc_libc_FunctionTable },
	{ "libc_setjmp", g_pSceLibc_libc_setjmp_FunctionTable },
	SCE_LIBRARY_ENTRY_END
};

const SCE_EXPORT_MODULE g_ExpModuleSceLibc =
{
	"libc",
	g_pSceLibc_LibTable
};


