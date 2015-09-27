// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#include "constants.hpp"  // my header
#include "Marshal.hpp"

namespace jnins {

Constants::Constants() = default;

Constants::~Constants() = default;

auto Constants::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<Constants>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.some_integer)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.some_string)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto Constants::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<Constants>::get();
    return {::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_someInteger)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_someString))};
}

}  // namespace jnins
