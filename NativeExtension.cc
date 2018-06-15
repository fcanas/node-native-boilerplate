#include "functions.h"

using v8::FunctionTemplate;

// NativeExtension.cc represents the top level of the module.
// C++ constructs that are exposed to javascript are exported here

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("nothing").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(nothing)).ToLocalChecked());
  Nan::Set(target, Nan::New("aString").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(aString)).ToLocalChecked());
  Nan::Set(target, Nan::New("aBoolean").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(aBoolean)).ToLocalChecked());
  Nan::Set(target, Nan::New("aNumber").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(aNumber)).ToLocalChecked());
  Nan::Set(target, Nan::New("anObject").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(anObject)).ToLocalChecked());
  Nan::Set(target, Nan::New("anArray").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(anArray)).ToLocalChecked());
  Nan::Set(target, Nan::New("callback").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(callback)).ToLocalChecked());
  Nan::Set(target, Nan::New("callbackWithParameter").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(callbackWithParameter)).ToLocalChecked());

  // Passing target down to the next NAN_MODULE_INIT
  MyObject::Init(target);
}

NODE_MODULE(NativeExtension, InitAll)
