// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "item_list.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

ItemList::ItemList() = default;

ItemList::~ItemList() = default;

auto ItemList::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<ItemList>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::List<::djinni::String>::fromCpp(jniEnv, c.items)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto ItemList::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<ItemList>::get();
    return {::djinni::List<::djinni::String>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_items))};
}

}  // namespace djinni_generated
