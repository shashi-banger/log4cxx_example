
#include <cstring>
#include <cstdio>
#include <cstdarg>
#include "base_log4cxx.h"

void  InitLog4cxx(char  *prop_file)
{
    log4cxx::PropertyConfigurator::configure(prop_file);
    return;
}

std::string LogFormat(const char *fmt, ...)
{
    va_list va;
    char         loc_str[1024] = "";
    std::string  s;
    //snprintf((const char*)s.c_str(), 1024, fmt, __VA_ARGS__);
    va_start(va, fmt);
    //vsnprintf((char*)s.c_str(), 1024, fmt, va);
    vsprintf((char*)loc_str, fmt, va);
    va_end(va);
    s = loc_str;
    return s;
}
