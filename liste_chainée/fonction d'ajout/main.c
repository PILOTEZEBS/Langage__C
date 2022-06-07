#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct pointer{ //@CodeurZEBS ici, je declare ma liste chainée
    int val;
    struct pointer *suivant;
}pointer;

pointer*ajouted(pointer*l, int x){ //@CodeurZEBS ajoutdebut liste
    pointer* p=malloc(sizeof(pointer));//@CodeuZEBS allocation memoire P
    p->val=x;  //p^.info=x
    p->suivant=l;  //p^.suivant= adresse l
    return p;  //@CodeurZEBS p
}
pointer *ajoutfin(pointer*l, int x){//@CodeurZEBS ajoutfin de liste
    pointer*p=malloc(sizeof(pointer));
    p->val=x;
    p->suivant=NULL;
    if(l==NULL){ //@CodeurZEBS si la liste est vide alors
        return p;
    }else{
        pointer*q=l;//@CodeurZEBS je declare celui qui vas parcourir la liste
        while(q->suivant!=NULL){
            q=q->suivant;
        }
        q->suivant=p;
        return l;
    }
}

void affiche(pointer*l){//@CodeurZEBS affichage des valeurs entrés
    pointer*p=l;
    while(p!=NULL){
        printf("%d, ", p->val);
        p=p->suivant;
    }
}

int main(){ //@CodeurZEBS fonction d entrée

    pointer*l=NULL; //@CodeurZEBS l=nil
    int i, val;
    for(i=0;i<5;i++){ //@CodeurZEBS l utilisateur entre ces valeurs
        printf("entrer une valeur: \n");
        scanf("%d",&val);
        l=ajouted(l,val);
    }
    printf("l affichage de vos elements sont:\n"); //@CodeurZEBS affiche les valeurs entrées
    affiche(l);
    printf("\n");
    for(i=0;i<5;i++){
        printf("entrer la valeur a ajouter:\n"); //@CodeurZEBS ajout encore 5 valeurs a la fin
        scanf("%d",&val);
        l=ajoutfin(l, val);
    } //@CodeurZEBS total de valeur actuel 10
    printf("votre nouvelle liste est:\n"); //@CodeurZEBS  puis reaffiche les valeurs
    affiche(l);
    getch();
    return 0;
}
