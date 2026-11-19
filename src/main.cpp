#include "../include/vis.hpp"

void  initall(){
    _global g;
    SetTargetFPS(60);
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(g.width, g.height, g.title);
    SetExitKey(KEY_ESCAPE);
    if (IsWindowReady())
        tools::logger("window initialized successfully!");
    
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        Core c;
        EndDrawing();
    }
    tools::logger("leaving window");
    CloseWindow();
    return ;
}

int main(){
    initall();
}