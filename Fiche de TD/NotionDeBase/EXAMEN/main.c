#include <stdio.h>

int main()
{
    printf("*********************************************************************************************************\n");
    printf("*                                     INSTITUT SAINT JEAN                                               *\n");
    printf("*                                                                                                       *\n");
    printf("*                                           DEVOIR                                                      *\n");
    printf("*  NOM: NGUENA ZEBS                                                 PROGRAMMATION C MINI PROJET 01      *\n");
    printf("*  PRENOM: HAUPUR FAUST                                              LECTURE & TRAITEMENT DE TEXTE      *\n");
    printf("*  LICENCE 1                                                                                            *\n");
    printf("*********************************************************************************************************\n\n");




                   // @ZEBSCODE OBJICTIF DU PROGRAMME
    printf("\t\tCONDITION D UTILISATION DU PROGRAMME DE NGUENA ZEBS: \n");
    printf("\t\t\t== Vous allez entrer votre texte;\n");
    printf("\t\t\t== Les espaces ne seront pas compter;\n");
    printf("\t\t\t== Le programme s arretera lorsque vous avez entrer './.'  ;\n");
    printf("\t\t\t== A la fin vous aurez le nobre de: les mots, phrases, paragraphes, voyelles, consonnes, caractere;\n\n");


                   //@ZEBSCODE DEBUT DU CODE DE NGUENA ZEBS
        printf("\t\tEntrer Votre texte: \n");//@ZEBSCODE DEMANDE LE TEXTE A L UTILISATEUR

                    //@ZEBSCODE DECLARATION DES VARIABLE
        int nbrepara=0, nbremot=0, nbrecara=0, voyel=0, conso=0;
        char caract=' ', stop1=' ', slach=' ', stop2=' ';

                    //@ZEBSCODE BOUCLE POUR VERIFIER ET COMPTER
        while(stop1!='.' && slach!='/' && stop2!='.'){

            scanf("%c",&caract);

            if(caract=='\n'){
                nbrepara++;
            }
            if(caract==' ' || caract=='\n'){
                nbremot++;

            }

            if(caract!=' ' && caract!='\n'){
                nbrecara++;
                if(caract=='a' || caract=='e' || caract=='i' || caract=='o' || caract=='u' || caract=='A' || caract=='E' || caract=='I' || caract=='O' || caract=='U'){
                    voyel=voyel+1;
                }else{
                    conso=conso+1;
                    if(caract==' '){
                        conso=conso-1;
                    }
                }
            }

            if(caract=='.'){
                stop1='.';
            }
            if(caract=='/'){
                slach='/';
            }
            if(caract=='.' && stop1=='.'){
                stop2='.';
            }

        }

                    //@ZEBSCODE PARTIE AFFICHAGE
        printf("le nombre de caractre: %d", nbrecara-1);
        printf("\n le nombre de mot: %d",nbremot);
        printf("\n le nombre de paragraphe: %d",nbrepara+1);
        printf("\n le nombre de voyelle: %d",voyel);
        printf("\nle nombre de consonne: %d",conso-1);
                    //@ZEBSCODE FIN DU PROGRAMME
    return 0;
}
