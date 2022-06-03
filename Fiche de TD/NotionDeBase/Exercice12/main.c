#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("la representation de la forme de l exercice 12 est: \n\n");
    int i=0,p=0,j=0;
    while(i<28){
        printf("-*");
        i=i+1;
    }
    printf("--*\n");
    printf("--*\t\t\t\t\t\t\t*--\n");
    while(p<7){
        printf("--*\t*-*-*-*-*\t*-*-*-*-*\t*-*-*-*-*\t*--\n");
        p=p+1;
    }
    printf("--*\t\t\t\t\t\t\t*--\n");
     printf("--*");

     while(j<28){
        printf("-*");
        j=j+1;
    }

    return 0;
}
