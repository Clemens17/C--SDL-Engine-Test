#pragma once

#include "../inc/SDL.h"
#include "../inc/SDL_image.h"

class Engine
{
public:
    Engine(const char* title, int w, int h);
    ~Engine() = default;

    void clear();
    void renderObject(SDL_Rect rect, int posX, int posY, int width, int height);
    void PhysicsUpdate(SDL_Rect obj, int x);
    void display();
    void quit();

private:
    SDL_Window* window;
    SDL_Renderer* ren;
};