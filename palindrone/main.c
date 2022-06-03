#include<stdio.h>
#include<stdlib.h>



int main(){ //@ZEBSCODE
        int x,y;
        int confirmateur;
        char mot[30];
    printf("entrer un mot:\n");
    scanf("%s",mot);
    confirmateur=1;
    for(x=0,y=strlen(mot)-1;x<y;x++,y--)
    {
       if(mot[x]!=mot[y]){
         confirmateur=0;
         break;
       }
    }
    if(confirmateur==1){
        printf("%s est un mot palindrome",mot);
    }
    if(confirmateur!=1){
         printf("%s n'est pas mot palindrome.",mot);
    }

    return 0;
}
