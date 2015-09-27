// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#include "set_record.hpp"  // my header
#include "Marshal.hpp"

namespace jnins {

SetRecord::SetRecord() = default;

SetRecord::~SetRecord() = default;

auto SetRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<SetRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Set<::djinni::String>::fromCpp(jniEnv, c.set)),
                                                           ::djinni::get(::djinni::Set<::djinni::I32>::fromCpp(jniEnv, c.iset)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto SetRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<SetRecord>::get();
    return {::djinni::Set<::djinni::String>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_set)),
            ::djinni::Set<::djinni::I32>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_iset))};
}

}  // namespace jnins
