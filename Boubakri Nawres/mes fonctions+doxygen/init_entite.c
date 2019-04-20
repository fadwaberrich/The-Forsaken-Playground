/**
* @file init_entite.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include"entite.h"
/**
* @brief initialiser  l'entite  .
* @author Boubakri Nawres
* @param E[] entite
* @param n nombre d'entite



* @return Nothing
*/

void initialiser_entite(ent E[],int n)
{
int i;
char entite[300];
for(i=0;i<n;i++)

{E[i].spriteleft = NULL;
E[i].spriteright=  NULL;


E[i].position_entite.x=0;
E[i].position_entite.y=0;
E[i].position_map.x=0;
E[i].position_map.y=0;
E[i].frame.x=0;
E[i].frame.y=0;			
E[i].frame.w = 0;//SPRITE_W;
E[i].frame.h =0;// SPRITE_H;
E[i].dst.x=0;
E[i].dst.y=0;
E[i].curframe=0;
E[i].maxframe=0;


E[i].Direction = 1;
E[i].State = WAITING;


E[i].image_entite=NULL;


E[i].pos_alea_max_x=0;
E[i].pos_alea_min_x=0;

E[i].pos_alea_max_y=0;
E[i].pos_alea_min_y=0;

E[i]. pos_max_x=0;
E[i]. pos_min_x=0;

E[i]. pos_min_y=0;
E[i].pos_max_y=0;


if(i==0)
            {
              E[i].spriteright=IMG_Load("mv1.png");
              E[i].dst.x=0;
              E[i].dst.y=0;
              E[i].maxframe=6;
              E[i].frame.w =153;//153;
              E[i].frame.h =139;//139;
              E[i]. pos_max_x=100;
              E[i]. pos_min_x=0;
              E[i].curframe=0;
              


            }
if(i==1)
            {
               E[i].spriteright=IMG_Load("mv2.png");
               E[i].dst.y=535;
               E[i].dst.x=100;
               E[i].maxframe=6;
               E[i].frame.w =153;
               E[i].frame.h =139;
               E[i]. pos_max_x=800;
               E[i]. pos_min_x=690;
               
             
            }
if(i==2)
            {
               E[i].spriteright=IMG_Load("B3.png");
               E[i].pos_max_x=90;
               E[i].pos_min_x=0;
               E[i].maxframe=8;
               E[i].frame.w =96;
               E[i].frame.h =111;
                 
            }

if(i==3)
            {  E[i].spriteleft=IMG_Load("walk-left.png");
               //E[i].image_entite=IMG_Load("3.png");
               E[i].pos_max_x=500;
               E[i].pos_min_x=800;
               E[i].dst.x=500;
                E[i].dst.y=300;
                E[i].frame.w =148;
               E[i].frame.h =102;
                E[i].maxframe=6;
                E[i].curframe=6;
               
                 
            }
if(i==4)

            {
              E[i].image_entite=IMG_Load("key.png");
              E[i].dst.x=0;
               E[i].dst.y=0;

            }
if(i==5)
{
               E[i].spriteright=IMG_Load("p-3.png");
               E[i].pos_max_x=0;
               E[i].pos_min_x=0;
               E[i].maxframe=10;
               E[i].frame.w =88;
               E[i].frame.h =62;
               E[i].dst.y=535;
               E[i].dst.x=600;

}
if(i==6)
{
               E[i].spriteright=IMG_Load("p-2.png");
               E[i].pos_max_x=0;
               E[i].pos_min_x=0;
               E[i].maxframe=10;
               E[i].frame.w =88;
               E[i].frame.h =62;
               E[i].dst.y=100;
               E[i].dst.x=100;

}

}






}