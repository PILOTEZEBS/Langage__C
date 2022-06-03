#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbre;
    printf("entrer un entier: ");
    scanf("%d",&nbre);
    if(nbre%2==0){
        int c=nbre+1;
        printf("les entiers impaires qui suivent sont %d, %d, %d",c,c+2,c+4);
    }else{
        printf("les entiers impaires qui suivent sont %d, %d, %d",nbre+2,nbre+4,nbre+6);
    }
    return 0;
}
