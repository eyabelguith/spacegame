#pragma once
#include<SDL/SDL.h>
#include<SDL/SDL_ttf.h>

typedef struct Vie {
	int hp;
	int score;
	SDL_Surface *bar, *msg;
	TTF_Font *font;
	SDL_Rect r;
	char scoreText[10];
} Vie;

void VIE_Init(Vie *v);
void VIE_ReduireHp(Vie *v, int degat);
void VIE_AjouterHp(Vie *v, int degat);
void VIE_AjouterScore(Vie *v, int score);
void VIE_RenderScore(Vie *v,SDL_Surface **screen);
