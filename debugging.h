#pragma once
#include <string>
#include <SDL.h>
#include <iostream>

void screenshot(SDL_Renderer* renderer, std::string fileName)
{
	SDL_Surface* surface = SDL_CreateRGBSurfaceWithFormat(0, 680, 480, 8, SDL_PIXELFORMAT_ABGR32);
	
	if (SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ABGR32, surface->pixels, surface->pitch) != 0)
	{
		fprintf(stderr, "Could not create surface from renderer");
	}

	
	if (SDL_SaveBMP(surface, fileName.c_str()) != 0)
	{
		fprintf(stderr, "Could not save %s", fileName.c_str());
	}

	SDL_FreeSurface(surface);
}