#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, conta = 0;
    double media = 0;
    do
    {
        printf("Inserire a \n");
        scanf("%d", &a);
        printf("Inserire b \n");
        scanf("%d", &b);
    } while (b <= a);
    do
    {
        printf("Inserire c \n");
        scanf("%d", &c);
        if (c >= a && c <= b)
        {
            conta++;
            media = media + (double)c;
        }

    } while (c >= a && c <= b);
    media = media / (double)conta;
    printf("La media è: %f\n", media);
    return 0;
}