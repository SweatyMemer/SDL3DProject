#include <SDL.h>
#include <stdio.h>
#include <wtypes.h>
#include <fmt/format.h>
#include "letter.h"
#include "debugging.h"
#include <ctime>
#undef main

void closeEverything(SDL_Window* window)
{
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void GetDesktopResolution(int& horizontal, int& vertical)
{
	RECT desktop;
	// Get a handle to the desktop window
	const HWND hDesktop = GetDesktopWindow();
	// Get the size of screen to the variable desktop
	GetWindowRect(hDesktop, &desktop);
	// The top left corner will have coordinates (0,0)
	// and the bottom right corner will have coordinates
	// (horizontal, vertical)
	horizontal = desktop.right;
	vertical = desktop.bottom;
};

SDL_Window* initialiseWindow(const char* windowTitle)
{
	int windowWidth;
	int windowHeight;


	GetDesktopResolution(windowWidth, windowHeight);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "Could not init SDL: %s\n", SDL_GetError());
	};


	SDL_Window* _window = SDL_CreateWindow(windowTitle,
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640, 480, SDL_WINDOW_RESIZABLE);

	if (!_window)
	{
		fprintf(stderr, "Could not create window");
	};

	return _window;
};

SDL_Renderer* initialiseRenderer(SDL_Window* window)
{
	SDL_Renderer* _renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	if (!_renderer)
	{
		fprintf(stderr, "could not create renderer\n");
	};

	return _renderer;
}

void drawOverlay(SDL_Renderer* renderer, std::string fps)
{
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	drawString(renderer, fps, 0, 0);
};

void draw(SDL_Renderer* renderer, std::string fps)
{
	// ------------------------ set's the background colour to black
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	// ------------------------



	drawOverlay(renderer, fps);

	SDL_RenderPresent(renderer);  // present the drawn shapes 
}

uint8_t handleEvents(SDL_Window* window)
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
						closeEverything(window);
						return (uint8_t)1;
				}

		}
	}
	return (uint8_t)0;
}



int main()
{
	SDL_Window* window = initialiseWindow("title brr");
	SDL_Renderer* renderer = initialiseRenderer(window);

	// ---------------- initialise timing variables to reduce load on redeclaration
	Uint64 start;
	Uint64 end;
	float elapsedMS;
	float fps = 0;


	while (true)
	{
		start = SDL_GetPerformanceCounter();
		draw(renderer, std::to_string(fps));

		if (handleEvents(window) == (uint8_t)1)
		{
			return 0;
		}

		end = SDL_GetPerformanceCounter();
		elapsedMS = (end - start) / (float)SDL_GetPerformanceFrequency() * 1000.0f;
		fps = 1000 / elapsedMS;

	}

}
