#include <node.h>
#include <nan.h>
#include "functions.h"

using v8::FunctionTemplate;
using v8::Handle;
using v8::Object;
using v8::String;

// NativeExtension.cc represents the top level of the module. 
// C++ constructs that are exposed to javascript are exported here

void InitAll(Handle<Object> exports) {
  exports->Set(NanNew<String>("nothing"),
    NanNew<FunctionTemplate>(nothing)->GetFunction());
  exports->Set(NanNew<String>("aString"),
    NanNew<FunctionTemplate>(aString)->GetFunction());
  exports->Set(NanNew<String>("aBoolean"),
    NanNew<FunctionTemplate>(aBoolean)->GetFunction());
  exports->Set(NanNew<String>("aNumber"),
    NanNew<FunctionTemplate>(aNumber)->GetFunction());
  exports->Set(NanNew<String>("anObject"),
    NanNew<FunctionTemplate>(anObject)->GetFunction());
  exports->Set(NanNew<String>("anArray"),
    NanNew<FunctionTemplate>(anArray)->GetFunction());
  exports->Set(NanNew<String>("callback"),
    NanNew<FunctionTemplate>(callback)->GetFunction());
}

NODE_MODULE(NativeExtension, InitAll)
