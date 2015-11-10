
#ifndef __BASE_LOG4CXX_H__
#define __BASE_LOG4CXX_H__

#include <string>

#include <log4cxx/logger.h>
#include "log4cxx/propertyconfigurator.h"

void  InitLog4cxx(char  *prop_file);
std::string LogFormat(const char *fmt, ...);

#endif //__BASE_LOG4CXX_H__
