#include "AcurosiaEngine.hpp"

Engine::Engine(const char* title, int w, int h)
{
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, 0);
    ren = SDL_CreateRenderer(window, -1, 0);
}

void Engine::clear()
{
    SDL_RenderClear(ren);
    SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
}

void Engine::renderObject(SDL_Rect rect, int posX, int posY, int width, int height)
{
    rect.x = posX;
    rect.y = posY;
    rect.w = width;
    rect.h = height;

    SDL_RenderFillRect(ren, &rect);
}

void Engine::display()
{
    SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
    SDL_RenderPresent(ren);
}

void Engine::quit()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}