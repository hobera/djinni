// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "djinni_support.hpp"
#include "sort_order.hpp"

namespace djinni_generated {

class SortOrder final : ::djinni::JniEnum {
public:
    using CppType = ::SortOrder;
    using JniType = jobject;

    using Boxed = SortOrder;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<SortOrder>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<SortOrder>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    SortOrder() : JniEnum("SortOrder") {}
    friend ::djinni::JniClass<SortOrder>;
};

}  // namespace djinni_generated
