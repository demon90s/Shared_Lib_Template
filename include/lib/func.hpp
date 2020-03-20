#pragma once

#include "core.hpp"

LIB_API void print(const char *msg);

#include <cstdio>
class LIB_API Application
{
public:
    void Run()
    {
        printf("App run.\n");
    }
};