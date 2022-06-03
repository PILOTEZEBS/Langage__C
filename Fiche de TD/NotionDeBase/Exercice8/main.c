#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("entrer un premier entier :");
    scanf("%d",&a);
    printf("entrer un deuxieme entier :");
    scanf("%d",&b);
    if(a>b){
        printf("le plus grand est %d",a);
    }else{
        printf("le plus grand est %d\n",b);
    }

    return 0;
}
