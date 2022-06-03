#include <stdio.h>
#include <stdlib.h>
typedef struct Etudiant{
    char nom[20];
    char prenom[20];
    int note;
}Etudiant;

int main()
{
    int ne;
    printf("Bonjour! vous avez combien d eleve dans votre classe??\n");
    scanf("%d",&ne);
    Etudiant et[ne];
    printf("entrer les infos de chaque etudiant:\n");
    int i;
    for(i=0;i<ne;i++){
        printf("entrer le nom de l etudiant %d:\n",(i+1));
        scanf("%s",&et[i].nom);
        printf("entrer son prenom \n");
        scanf("%s",&et[i].prenom);
        printf("entrer sa note \n");
        scanf("%d",&et[i].note);
    }
    printf("la liste de vos eleves sont:\n\n ");
    for(i=0;i<ne;i++){
        printf("nom:%s\n",et[i].nom);
        printf("prenom:%s\n",et[i].prenom);
        printf("note:%d\n\n",et[i].note);
    }
    printf("le nom de ceux ayant la note>=10 sont:\n");
        for(i=0;i<ne;i++){
        if(et[i].note>=10){
            printf("%s\n",et[i].nom);
        }
    }
    return 0;
}
