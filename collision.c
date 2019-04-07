#include <math.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <math.h>
int collision_trigo(SDL_Surface *perso, SDL_Surface *enemie, SDL_Rect posp, SDL_Rect pose)
{
    int ra,rb,xb,xa,ya,yb,distance;
    ra=(perso->w)/2;
    xa=(posp.x+(perso->w/2));
    ya=(posp.y+(perso->h/2));
    rb=(enemie->w)/2;
    xb=(pose.x+(enemie->w/2));
    yb=(pose.y+(enemie->h/2));
    distance=sqrt((xa-xb)*(xa-xb)+( ya+yb)*( ya+yb));
    if(distance<=ra+rb)
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
}
