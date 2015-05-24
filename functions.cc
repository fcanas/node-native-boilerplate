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