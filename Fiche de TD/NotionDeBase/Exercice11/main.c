#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,nbrecan;
    printf("entrer le volume en litres de votre citerne: ");
    scanf("%d",&v);
    nbrecan=v/0.33;
    printf("il faut %d canettes pour remplir votre citerne de %d litres",nbrecan,v);

    return 0;
}
