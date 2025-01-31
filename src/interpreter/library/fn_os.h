CONST(os_unknown, -1)
CONST(os_win32, 0)
CONST(os_windows, 0)
CONST(os_uwp, 1)
CONST(os_linux, 2)
CONST(os_macosx, 3)
CONST(os_ios, 4)
CONST(os_android, 5)
CONST(os_ps3, 6)
CONST(os_ps4, 7)
CONST(os_psvita, 8)
CONST(os_xboxone, 9)

CONST(browser_not_a_browser, 0)
CONST(browser_unknown, 1)


#if defined(WIN32) || defined(_WIN32)
#define OS_SET
CONST(os_type, 0)
#endif

#ifdef __linux__
#define OS_SET
CONST(os_type, 2)
#endif

#ifdef __APPLE__
#define OS_SET
CONST(os_type, 3)
#endif

#ifndef OS_SET
CONST(os_type, -1)
#else
#undef OS_SET
#endif

#ifndef __EMSCRIPTEN__
CONST(os_browser, 0)
#else
// TODO: detect actual browser (needs to be a getvar)
CONST(os_browser, 1)
#endif
