#include "../include/vis.hpp"

void  initall(){
    _global g;
    InitWindow(g.width, g.height, g.title);
    SetExitKey(KEY_ESCAPE);
    if (IsWindowReady())
        tools::logger("window initialized successfully!");
    
    while (!WindowShouldClose()){
    }
    tools::logger("leaving window");
    CloseWindow();
    return ;
}


int main(){
    initall();
}