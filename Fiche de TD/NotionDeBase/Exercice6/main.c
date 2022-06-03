#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha;
    printf("Entrer votre un caractere alphabetique: ");
    scanf("%c",&alpha);
    if(alpha=='z'){
        printf("il y a pas de prochainne lettre.");
    }else{
        printf("la prochainne lettre est: %c",(alpha+1));
    }

    return 0;
}
