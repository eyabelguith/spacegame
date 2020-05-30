#include"vie.h"

void VIE_Init(Vie *v){
	v->hp = 100;
	v->r.w = 100;
	v->r.h = 10;

	v->bar = SDL_CreateRGBSurface(0,100,10,32,0,0,0,0);
	SDL_FillRect(v->bar, NULL, 0x00ff00);

	v->font = TTF_OpenFont("font.ttf",32);
	v->score = 0;
}

void VIE_ReduireHp(Vie *v, int degat){
	v->hp -= degat;
}

void VIE_AjouterScore(Vie *v, int score){
	v->score += score;
	printf("%d\n",v->score);
}

void VIE_RenderScore(Vie *v, SDL_Surface **screen){
	SDL_Color color = {255,255,255};
	sprintf(v->scoreText,"%d",v->score);
	v->msg = TTF_RenderText_Solid(v->font,v->scoreText,color);
	SDL_BlitSurface(v->msg,NULL,*screen,NULL);
}
