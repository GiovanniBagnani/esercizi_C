#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    double rapporto;
    do
    {
        printf("Inserire a \n");
        scanf("%d", &a);
        printf("Inserire b");
        scanf("%d", &b);
        if (a > b)
            rapporto = (double)a / (double)b;
        else
            rapporto = (double)b / (double)a;
        if (rapporto > 0)
            rapporto = sqrt(rapporto);
        printf("La radice è %f", rapporto);
    } while (rapporto > 0);
    printf("Non è possibile il calcolo della radice per numeri negativi!");
    return 0;
}