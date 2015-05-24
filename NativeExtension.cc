#include <node.h>
#include <nan.h>
#include "functions.h"

using v8::FunctionTemplate;
using v8::Handle;
using v8::Object;
using v8::String;

void InitAll(Handle<Object> exports) {
  exports->Set(NanNew<String>("nothing"),
    NanNew<FunctionTemplate>(nothing)->GetFunction());
  exports->Set(NanNew<String>("aString"),
    NanNew<FunctionTemplate>(aString)->GetFunction());
  exports->Set(NanNew<String>("aBoolean"),
    NanNew<FunctionTemplate>(aBoolean)->GetFunction());
}

NODE_MODULE(NativeExtension, InitAll)