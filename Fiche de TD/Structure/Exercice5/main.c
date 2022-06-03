#include <stdio.h>
#include <stdlib.h>

typedef struct Ville{
    char nom[20];
    int habitant;
}Ville;

int main()
{
    printf("votre pays a combien de ville?\n");
    int nbre;
    scanf("%d",&nbre);
    Ville v[nbre];
    int i;
    for(i=0;i<nbre;i++){
        printf("nom: \n");
        scanf("%s",&v[i].nom);
        printf("nbre d habitant: \n");
        scanf("%d",&v[i].habitant);
    }
    printf("\n");
    printf("la liste de vos villes sont: \n");
    for(i=0;i<nbre;i++){
        printf("%s\n",v[i].nom);
        printf("%d  habitants \n",v[i].habitant);
    }
    printf("\n");
    int x;
    for(i=0;i<nbre;i++){
        if(v[i].habitant>v[i+1].habitant){
            x=v[i].habitant;
            v[i].habitant=v[i+1].habitant;
            v[i+1].habitant=x;
        }
    }
    printf("la liste de vos villes actuelles: \n");
    for(i=0;i<nbre;i++){
        printf("%d  habitants pour la ville specifique \n",v[i].habitant);
    }
    return 0;
}
