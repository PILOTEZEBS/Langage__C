#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("entrer le numerateur: ");
    scanf("%d",&a);
    printf("entrer le denominateur :");
    scanf("%d",&b);
    float d=(float)a/b;
    printf("%d/%d=%.4f \n",a,b,d);
    return 0;
}
