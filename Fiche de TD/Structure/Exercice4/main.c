#include <stdio.h>
#include <stdlib.h>

typedef struct Personne{
    char nom[20];
    char prenom[20];
    int age;
}Personne;

int main()
{
    printf("vous etes autotal combien??\n");
    int pers;
    scanf("%d",&pers);
    Personne p[pers];
    int i;
    for(i=0;i<pers;i++){
        printf("nom:\n");
        scanf("%s",&p[i].nom);
        printf("prenom:\n");
        scanf("%s",&p[i].prenom);
        printf("age:\n");
        scanf("%d",&p[i].age);
    }
    printf("voici votre liste:\n");
    for(i=0;i<pers;i++){
        printf("%s\n",p[i].nom);
        printf("renom:%s\n",p[i].prenom);
        printf("%d ans\n",p[i].age);
    }
    printf("\n");
    printf("a quel position voulez vous ajouter une nouvelle personne:\n");
    int posi;
    scanf("%d",&posi);
    for(i=0;i<pers;i++){
        if(i==(posi-1)){
            printf("nom:\n");
            scanf("%s",&p[i].nom);
            printf("prenom:\n");
            scanf("%s",&p[i].prenom);
            printf("age:\n");
            scanf("%d",&p[i].age);
        }
    }
    printf("\nliste actuel:\n");
    for(i=0;i<pers;i++){
        printf("%s\n",p[i].nom);
        printf("renom:%s\n",p[i].prenom);
        printf("%d ans\n",p[i].age);
    }
    return 0;
}
