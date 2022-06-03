#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbre,i,p,c;
    printf("entrer un nombre :");
    scanf("%d",&nbre);
    for(i=0; i<nbre; i++){
        if((i*i)==nbre){
            p=i*i;
            c=i;
            i=nbre;
        }
    }
    if(p==nbre){
        printf("%d est un carre parfait de %d",nbre,c);
    }else{
        printf("%d n est pas un carre parfait d un nbre",nbre);
    }


    return 0;
}
