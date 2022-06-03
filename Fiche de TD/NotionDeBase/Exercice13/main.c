#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nbre;
    printf("entrer votre reel volous: ");
    scanf("%f",&nbre);
    float d=(float)(nbre-(int)nbre);
    printf("la partie fractionnaire de %.3f est = %.3f",nbre,d);
    return 0;
}
