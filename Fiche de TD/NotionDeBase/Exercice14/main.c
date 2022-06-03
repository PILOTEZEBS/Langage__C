#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,l,h;
    printf("entrer la dimension de la longueur: ");
    scanf("%d",&L);
    printf("entrer la dimension de la largeur: ");
    scanf("%d",&l);
    printf("entrer la dimension de la hauteur: ");
    scanf("%d",&h);
    if(L>l){
        float s=(float)2*(((L+l)*h)+(L*l));
    printf("la superficie= %.2f",s);
    }else{
        printf("erreur Longueur doit etre > a la largeur");
    }

    return 0;
}
