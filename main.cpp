#define SDL_MAIN_HANDLED
#include "Engine/AcurosiaEngine.hpp"

int main(int argc, char *argv[])
{
    Engine engine("Debug", 1280, 720);

    bool gameRunning = true;

	SDL_Event event;
    SDL_Rect player;    
    SDL_Rect enemy;

	while (gameRunning)
	{
        
		engine.clear();
		engine.renderObject(player, 100 , 100, 200, 200);
        engine.renderObject(enemy, 500,500,200,200);
		engine.display();

        while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
				gameRunning = false;
        }
	}

	engine.quit();
	SDL_Quit();


    return 0;
}