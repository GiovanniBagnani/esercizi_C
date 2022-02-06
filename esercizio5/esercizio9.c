#include <stdio.h>
int main()
{
    int a, b, c, max, min, cont = 0;

    do
    {
        printf("Inserire primo numero");
        scanf("%d", &a);
        printf("Inserire secondo numero");
        scanf("%d", &b);
        printf("Inserire terzo numero");
        scanf("%d", &c);
        if (a < b && b < c)
        {
            if (cont > 0)
            {
                if (c > max)
                {
                    max = c;
                }
                if (a < min)
                {
                    min = a;
                }
            }
            else
            {
                max = c;
                min = a;
            }
        }
        cont++;
    } while (a >= 0 || b >= 0 || c >= 0);
    printf("Il valore massimo è: ");
    printf("%d", max);
    printf(" \n Il valore minimo è: ");
    printf("%d \n", min);
    return 0;
}
