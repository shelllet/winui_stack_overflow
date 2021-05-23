#pragma once
#include "Runtime.g.h"



namespace winrt::App1::implementation
{
    struct Runtime : RuntimeT<Runtime>
    {
        Runtime() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}
namespace winrt::App1::factory_implementation
{
    struct Runtime : RuntimeT<Runtime, implementation::Runtime>
    {
    };
}
