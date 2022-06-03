#include <stdio.h>
#include <stdlib.h>



int main(){
    int R=-1;
    while (R!=0){//ici, je n arrete pas la boucle pour que l utilisateur continue d entrer un nombre a verifier mais si tu veux tu peut retirer pour arreter la boucle @zebs code
       int a;
    printf("entrer un nombre:\a");
    scanf("%d",&a);
    int i;
    int s=0;
    if(a==0){
         printf("%d n est pas un nombre parfait \n\n",a);
    }else{
       for (i=1; i<a; i++){
        if (a%i==0){
            s=s+i;
        }
    }
    if (s==a){
        printf("%d est un nombre parfait \n\n", a);
    }else{
        printf("%d n est pas un nombre parfait \n\n",a);
    }
    }

    }

return 0;
}
