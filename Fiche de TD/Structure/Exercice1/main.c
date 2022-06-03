#include <stdio.h>
#include <stdlib.h>

typedef struct Point{
    float x;
    float y;
}Point;

int main()
{
    Point p[2];
    printf("entrer labscisse du premiere point:\n");
    scanf("%f",&p[0].x);
    printf("entrer l'ordonnee:\n");
    scanf("%f",&p[0].y);
    printf("\n\n");
    printf("entrer labscisse du deuxieme point:\n");
    scanf("%f",&p[1].x);
    printf("entrer l'ordonnee:\n");
    scanf("%f",&p[1].y);
    printf("vaut point sont:\n p1=(%.1f, %.1f)\n p2=(%.1f,%.1f)\n",p[0].x,p[0].y,p[1].x,p[1].y);
    float dx,dy;
    if(p[0].x>=p[1].x){
        dx=p[0].x-p[1].x;
    }else{
        dx=p[1].x-p[0].x;
    }
    if(p[0].y>=p[1].y){
        dy=p[0].y-p[1].y;
    }else{
        dy=p[1].y-p[0].y;
    }

    printf("suivant l axe des x, p1 et p2 sont distant de %.1f \n",dx);
    printf("suivant l axe des y, p1 et p2 sont distant de %.1f",dy);
    return 0;
}
