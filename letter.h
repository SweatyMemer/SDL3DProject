#pragma once
#include <stdint.h>
#include <SDL.h>
#include <vector>
#include "debugging.h"
#include <format>
#include <array>
#include <unordered_map>
#include <bitset>


std::bitset<16> a[16] = 
{
	std::bitset<16>(0b0001111110000000),
	std::bitset<16>(0b0001111110000000),
	std::bitset<16>(0b0001111110000000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1111111111110000),
	std::bitset<16>(0b1111111111110000),
	std::bitset<16>(0b1111111111110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000),
	std::bitset<16>(0b1110000001110000)
};

std::bitset<16> b[16] = 
{
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000)
};

std::bitset<16> c[16] = 
{
	std::bitset<16>(0b0001111111111000),
	std::bitset<16>(0b0001111111111000),
	std::bitset<16>(0b0001111111111000),
	std::bitset<16>(0b1110000000001100),
	std::bitset<16>(0b1110000000001100),
	std::bitset<16>(0b1110000000001100),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000001100),
	std::bitset<16>(0b1110000000001100),
	std::bitset<16>(0b0001111111111000),
	std::bitset<16>(0b0001111111111000),
	std::bitset<16>(0b0001111111111000)
};

	std::bitset<16> d[16]
{
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000),
	std::bitset<16>(0b1111111111100000)
};

std::bitset<16> e[16]
{
	std::bitset<16>(0b1111111111111000),
	std::bitset<16>(0b1111111111111000),
	std::bitset<16>(0b1111111111111000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1111111000000000),
	std::bitset<16>(0b1111111000000000),
	std::bitset<16>(0b1111111000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1111111111111000),
	std::bitset<16>(0b1111111111111000),
	std::bitset<16>(0b1111111111111000)
};

	std::bitset<16> f[16]
{
	std::bitset<16>(0b1111111111110000),
	std::bitset<16>(0b1111111111110000),
	std::bitset<16>(0b1111111111110000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1111111100000000),
	std::bitset<16>(0b1111111100000000),
	std::bitset<16>(0b1111111100000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000),
	std::bitset<16>(0b1110000000000000)
};

std::bitset<16> g[16]
{
	std::bitset<16>(0b0011111111111000),
	std::bitset<16>(0b0011111111111000),
	std::bitset<16>(0b0011111111111000),
	std::bitset<16>(0b1100000000000000),
	std::bitset<16>(0b1100000000000000),
	std::bitset<16>(0b1100000011111000),
	std::bitset<16>(0b1100000011111000),
	std::bitset<16>(0b1100000011111000),
	std::bitset<16>(0b1100000000011000),
	std::bitset<16>(0b1100000000011000),
	std::bitset<16>(0b1100000000011000),
	std::bitset<16>(0b1100000000011000),
	std::bitset<16>(0b1100000000011000),
	std::bitset<16>(0b0011111111100000),
	std::bitset<16>(0b0011111111100000),
	std::bitset<16>(0b0011111111100000)
};

std::bitset<16> h[16]
{
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1111111111111000),
	std::bitset<16>(0b1111111111111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000),
	std::bitset<16>(0b1110000000111000)
};

std::unordered_map<char, std::bitset<16>* > initialiseCharacterMap() {


	std::unordered_map <char, std::bitset<16>* > letterMap
	{
		{'a', a},
		{'b', b},
		{'c', c},
		{'d', d},
		{'e', e},
		{'f', f},
		{'g', g}
	};
	return letterMap;
};


void drawLetter(SDL_Renderer* renderer, const std::bitset<16> letter[], int x, int y)
{

	SDL_Point tempPoint;
	std::vector<SDL_Point> points;
	uint16_t count = 0;
	uint16_t drawCount = 0;
	for (uint8_t j = 0; j <= 15; j++)
	{
		for (uint8_t i = 0; i <= 15; i++)
		{
			count += 1;
			if (letter[j][i] == 1)
			{
				drawCount += 1;
				tempPoint = { x - i, y + j };
				points.push_back(tempPoint);
			}
		}
	}
	SDL_RenderDrawPoints(renderer, points.data(), drawCount);
}


void drawString(SDL_Renderer* renderer, std::unordered_map<const char *, std::bitset<16>* > letterMap, std::string inString, int x, int y)
{
	std::bitset<16>* tempLetter;
	for (char &c : inString)
	{
		if (c == "\n")
		{
			y += 20;
			continue;
		};
		drawLetter(renderer, letterMap[c], x, y);
		x += 16;
	};
}