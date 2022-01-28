#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    double prodotto = 0;
    double somma = 0;
    do
    {
        printf("Inserire primo numero");
        scanf("%d", &a);
        printf("Inserire secondo numero");
        scanf("%d", &b);
        prodotto = (double)a * (double)b;
        printf("il prodotto è:  %f", prodotto);
        somma = somma + prodotto;
    } while (a != 0 && b != 0);
    printf("La somma è:  %f", somma);
    return 0;
}
