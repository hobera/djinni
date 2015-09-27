// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#include "record_with_nested_derivings.hpp"  // my header
#include "Marshal.hpp"
#include "record_with_derivings.hpp"

namespace jnins {

RecordWithNestedDerivings::RecordWithNestedDerivings() = default;

RecordWithNestedDerivings::~RecordWithNestedDerivings() = default;

auto RecordWithNestedDerivings::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<RecordWithNestedDerivings>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.key)),
                                                           ::djinni::get(::jnins::RecordWithDerivings::fromCpp(jniEnv, c.rec)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto RecordWithNestedDerivings::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<RecordWithNestedDerivings>::get();
    return {::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_key)),
            ::jnins::RecordWithDerivings::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_rec))};
}

}  // namespace jnins
