#ifndef VIS_HPP
#define VIS_HPP

#include <iostream>
#include "../raylib/include/raylib.h"


class Core{
    private:

    public:
        Core();
        void loadingScreen();
};

typedef struct glob{
    int width = 1800;
    int height = 1200;
    const char* title = "DbgCtx";
    int def_font_size = 22;
}   _global;

namespace tools {
    void logger(const char* msg);
}

namespace TextVault {
    constexpr const char* LOADING = "loading...";
    constexpr const char* READY   = "ready";
}

#endif