#include <stdio.h>
#include <stdlib.h>

typedef struct Etudiant{
    char nom[20];
    float moyenne;
}Etudiant;
int main()
{
    printf("vous avez combien d etudiant dans votre institut");
    int nbre;
    scanf("%d",&nbre);
    Etudiant e[nbre];
    int i;
    for(i=0;i<nbre;i++){
        printf("entrer le nom de l etudiant %d\n",(i+1));
        scanf("%s",&e[i].nom);
        printf("entrer la moyenne de l etudiant %d\n\n",(i+1));
        scanf("%f",&e[i].moyenne);
    }
    printf("la liste de vos etudiants est:\n");
    for(i=0;i<nbre;i++){
        printf("%s avec une moyenne de ",e[i].nom);
        printf("%.1f\n\n",e[i].moyenne);
    }
    printf("les etudiants qui ont recus 1 point sont: \n\n");
    for(i=0;i<nbre;i++){
       if(e[i].moyenne<10){
            printf("%s avec une moyen de %.1f\n",e[i].nom,(e[i].moyenne+1));
       }
    }
    printf("les etudiants qui ont recus 0.5 point sont: \n\n");
    for(i=0;i<nbre;i++){
       if(e[i].moyenne>10 && e[i].moyenne<=15){
            printf("%s avec une moyen de %.2f\n",e[i].nom,(e[i].moyenne+0.5));
       }
    }
    return 0;
}
