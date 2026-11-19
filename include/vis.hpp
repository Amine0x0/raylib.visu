#ifndef VIS_HPP
#define VIS_HPP

#include <iostream>
#include "../raylib/include/raylib.h"

typedef struct glob{
    int width = 800;
    int height = 800;
    const char* title = "DbgCtx";
}   _global;

namespace tools {
    void logger(const char* msg);
}

#endif