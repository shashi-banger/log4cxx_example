
#include <iostream>
#include "module_log4cxx.h"
#include <log4cxx/hierarchy.h>
#include <log4cxx/logmanager.h>

main(int argc, char *argv[])
{
    log4cxx::LoggerPtr   log_ptr;
    log4cxx::LoggerPtr   log_ptr1;
    InitLog4cxx(argv[1]);
    MOD1_LOG_ERROR("Hello World");
    MOD1_LOG_INFO("Hello World %d %s", 45, "Shashi");

    log4cxx::spi::LoggerRepositoryPtr r = log4cxx::Logger::getRootLogger()->getLoggerRepository();
    log_ptr1 = r->exists("com.amg.mod1");
    std::cout << r->isConfigured() << std::endl;
    std::cout << log_ptr1 << std::endl;
}
