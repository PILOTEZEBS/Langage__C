#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi=3.14;
    float r1,r2;
    printf("Entrer le rayon du 1er cercle: ");
    scanf("%f",&r1);
     printf("Entrer le rayon du 2em cercle: ");
    scanf("%f",&r2);
    float s;
    if(r1<=r2){
        s=(float)pi*((r2*r2)-(r1*r1));
    }else{
        s=(float)pi*((r1*r1)-(r2*r2));
    }
    printf("la surface de se cercle concentrique est: %.2f \n",s);
    return 0;
}
