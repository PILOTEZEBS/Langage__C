#include <stdio.h>
#include <stdlib.h>

typedef struct Personne{
    char nom[20];
    int age;
}Personne;

int main()
{
    printf("combien de personne agée y a t il?\n");
    int pa;
    scanf("%d",&pa);
    Personne p[pa];
    int i;
    for(i=0;i<pa;i++){
        printf("nom:\n");
        scanf("%s",&p[i].nom);
        printf("age:\n");
        scanf("%d",&p[i].age);
    }
    printf("\n");
    printf("la liste de vos personnes agées sont:\n");
     for(i=0;i<pa;i++){
        printf("%s\n",p[i].nom);
        printf("%d ans\n",p[i].age);
    }
    printf("\n");
    printf("la liste de vos personnes actuelle apres suppressions sont:\n");
    for(i=0;i<pa;i++){
        if(p[i].age>=20){
            p[i].age=p[i+1].age;
        }
    }
    printf("\n");
    printf("la liste de vos personnes agées sont:\n");
     for(i=0;i<pa;i++){
        printf("%s\n",p[i].nom);
        printf("%d ans\n",p[i].age);
    }
    return 0;
}
