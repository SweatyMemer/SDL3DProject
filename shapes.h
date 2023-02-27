#pragma once
#include <SDL2/sdl.h>

class rectangle
{
private:
	SDL_Rect rect;

public:
	int x;
	int y;
	int w;
	int h;
	float rotation;
	float scale;
	SDL_Point midpoint;

	rectangle(int _x, int _y, int _w, int _h, float _rotation)
	{
		x = _x;
		y = _y;
		w = _w;
		h = _h;
		rotation = _rotation;
		scale = 1;
		rect = SDL_Rect{ _x, _y, _w, _h };

		midpoint = { (y + h / 2), (x + w / 2) };
	}

	void draw(SDL_Renderer* renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
	{
		SDL_SetRenderDrawColor(renderer, r, g, b, a);
		SDL_RenderDrawRect(renderer, &rect);
	}

	void resize(float _scale)
	{
		scale = _scale;
		rect.w = round(rect.w * scale);
		rect.h = round(rect.h * scale);
	}

	void rotate()
	{

	}
};