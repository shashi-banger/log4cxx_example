
#ifndef __MODULE_LOG4CXX_H__
#define __MODULE_LOG4CXX_H__

#include "base_log4cxx.h"

#define MODULE_NAME "com.amg.mod1"

static log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger(MODULE_NAME));
#define MOD1_LOG_ERROR(fmt, ...) LOG4CXX_ERROR(logger, LogFormat(fmt, ## __VA_ARGS__))
#define MOD1_LOG_INFO(fmt, ...) LOG4CXX_INFO(logger, LogFormat(fmt, ## __VA_ARGS__))
#define MOD1_LOG_WARN(fmt, ...) LOG4CXX_WARN(logger, LogFormat(fmt, ## __VA_ARGS__))
#define MOD1_LOG_FATAL(fmt, ...) LOG4CXX_FATAL(logger, LogFormat(fmt, ## __VA_ARGS__))
#define MOD1_LOG_DEBUG(fmt, ...) LOG4CXX_DEBUG(logger, LogFormat(fmt, ## __VA_ARGS__))

#endif //__MODULE_LOG4CXX_H__
