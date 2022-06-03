#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void menu(){
        printf("1-CALCUL DE LA SOMME\n");
        printf("2-CALCULE DE LA MOYENNE\n");
        printf("3-VALEUR MIN DU TABLEAU\n");
        printf("4-VALEUR MAX DU TABLEAU\n");
        printf("5-CALCUL DE LA VARIANCE\n");
        printf("6-CALCUL DE L ECART TYPE`\n");
        printf("7-EXIT");
    }


 int main(){//fontion d entrer du code
     printf("======================BIENVENUE DANS LE PROGRAMME DE NGUENA ZEBS ISJ LICENCE 1============\n\n\n");

       printf("entrer le nombre de valeur que vas contenir le tableau: "); // ici, l utilisateur doit entrer le nbre de valeur du tableau
        int nbreval;
        scanf("%d",&nbreval);
        // cette boucle lui permettra d etre oubliger d etre une valeur >=0
            while(nbreval==0){
                printf("vous n avez aucune valeur. \n entrer une fois de plus le nombre de valeur de votre tableau: ");
                scanf("%d",&nbreval);
            }
             while (nbreval<0){
            printf("......oupppssss vous avez entrer une valeur negative! \n");
            printf("entrer encore le nombre de valeur positif que vas contenir votre tableau: ");
            scanf("%d",&nbreval);
        }//fin de la boucle obligatoire @ZEBS code


//+++++++++++++++++++++++++++++++++++++++++L UTILISATEUR ENTRERA CHAQUE VALEUR DU TABLEAU+++++++++++++++++++++++++++++++++++++++++

        int i=0; int tab[nbreval];
            for(i=0; i<nbreval; i++){
            printf("entrer la valeur %d du tableau: ",i+1);
            scanf("%d",&tab[i]);
            }
//++++++++++++++++++++++++++++++++++++++++++++++++++++++FIN ENTRER +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

            printf("\n\n");
            menu();
            int choix;
            printf("choisir une option de calcul");
            scanf("%d",&choix);
            while(choix<=0 && choix>7){
                printf("faite un bon choix parmis ces numero entre 1 et 7");
            }
            switch(choix){
                case 1:

                    break;
                 case 2:

                    break;
                 case 3:

                    break;
                 case 4:

                    break;
                 case 5:

                    break;
                 case 6:

                    break;
                 case 7:

                    break;

            }

  //++++++++++++++++++++++++++++++++++++++++CALCULE DE LA MOYENNE ET MOYENNE++++++++++++++++++++++++++++++++++++++++++++++++
                int somme=0;
             for(i=0; i<nbreval; i++){
                somme=somme+tab[i];
            }
            printf("======Ainsi, la somme des valeurs du tableau est \n \t\t S==%d \n\n",somme);
            float Moyenne;
            Moyenne= (float)somme/nbreval;
             printf("======La moyenne du tableau ci-dessus est \n \t\t M==%.2f \n\n",  Moyenne);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++FIN CALCUL SOM ET MOY++++++++++++++++++++++++++++++++++++++++++++++



//+++++++++++++++++++++++++++++++++++++++++++++++++++++MIN ET MAX DU TABLEAU +++++++++++++++++++++++++++++++++++++++++++++++++
            int min=tab[0]; int max=tab[0];
            for(i=1; i<nbreval; i++){
                if(tab[i]<min){
                    min=tab[i];
                }
            }
             for(i=1; i<nbreval; i++){
                if(tab[i]>max){
                    max=tab[i];
                }
            }
            printf("======la plus petite valeur du tableau est: %d\n\n",min);
            printf("======la plus grande valeur du tableau est: %d\n\n\n\n",max);

//++++++++++++++++++++++++++++++++++++++++++++++++++FIN MIN ET MAX ++++++++++++++++++++++++++++++++++++++++++++++++++++++++





            printf("=============================CALCULE DE LA VARIANTE 'V'   ET DE L ECART TYPE '6'===================================  \n\n");


            float xi=0; float so=0;
            for(i=0; i<nbreval;i++){
                xi=xi+(tab[i]-Moyenne)*(tab[i]-Moyenne);
            }

            float v=(float)xi/nbreval;
            printf("======La variante par rapport a vos valeur du tableau donne \n \t\t V==%.2f \n\n",v);

            float ecart;
            ecart= sqrt(v);
            printf("======Nous deduisons donc que l ecart type \n \t\t 6== %.2f \n\n",ecart);
            printf(" merci dutiliser le programme de");


//+++++++++++++++++++++++++++++++++++++++++FIN DU PROGRAMME+++++++++++++++++++++++++++++++++

        return 0;
 }
