
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_logging_XMLFormatter__
#define __java_util_logging_XMLFormatter__

#pragma interface

#include <java/util/logging/Formatter.h>
extern "Java"
{
  namespace java
  {
    namespace text
    {
        class SimpleDateFormat;
    }
  }
}

class java::util::logging::XMLFormatter : public ::java::util::logging::Formatter
{

public:
  XMLFormatter();
private:
  static void appendTag(::java::lang::StringBuffer *, jint, ::java::lang::String *, ::java::lang::String *);
  static void appendTag(::java::lang::StringBuffer *, jint, ::java::lang::String *, jlong);
public:
  virtual ::java::lang::String * format(::java::util::logging::LogRecord *);
  virtual ::java::lang::String * getHead(::java::util::logging::Handler *);
  virtual ::java::lang::String * getTail(::java::util::logging::Handler *);
private:
  static ::java::lang::String * lineSep;
  ::java::text::SimpleDateFormat * __attribute__((aligned(__alignof__( ::java::util::logging::Formatter)))) iso8601;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_logging_XMLFormatter__
