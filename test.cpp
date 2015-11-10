

#include "module_log4cxx.h"

main(int argc, char *argv[])
{
    InitLog4cxx(argv[1]);
    MOD1_LOG_ERROR("Hello World");
    MOD1_LOG_INFO("Hello World %d %s", 45, "Shashi");
}
