#include "../include/vis.hpp"


Core::Core(){
    loadingScreen();
    return ;
}

void Core::loadingScreen(){
    _global g;
    DrawText(TextVault::LOADING, g.width/2, g.height/2, g.def_font_size, WHITE);
    return ;
}