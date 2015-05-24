#include <nan.h>
#include "functions.h"

NAN_METHOD(nothing) {
    NanScope();
    NanReturnUndefined();
}

NAN_METHOD(aString) {
    NanScope();
    NanReturnValue(NanNew<v8::String>("This is a thing."));
}

NAN_METHOD(aBoolean) {
    NanScope();
    NanReturnValue(NanFalse());
}

NAN_METHOD(aNumber) {
    NanScope();
    NanReturnValue(NanNew<v8::Number>(1.75));
}

NAN_METHOD(anObject) {
    NanScope();
    v8::Local<v8::Object> obj = NanNew<v8::Object>();
    obj->Set(NanNew<v8::String>("key"), NanNew<v8::String>("value")); 
    NanReturnValue(obj);
}

NAN_METHOD(anArray) {
    NanScope();
    v8::Local<v8::Array> arr = NanNew<v8::Array>(3);
    arr->Set(0, NanNew<v8::Number>(1));
    arr->Set(1, NanNew<v8::Number>(2));
    arr->Set(2, NanNew<v8::Number>(3));
    NanReturnValue(arr);
}

NAN_METHOD(callback) {
    NanScope();

    v8::Local<v8::Function> callbackHandle = args[0].As<v8::Function>();
    NanCallback *callback = new NanCallback(callbackHandle);

    callback->Call(0, NULL);

    delete callback;

  NanReturnUndefined();
}
