#include <stdio.h>
#include <math.h>
int main()
{
    int somma = 0, n, cont = 0;
    double radici;
    do
    {
        printf("Inserire numero");
        scanf("%d", &n);
        if (n > 0)
        {
            radici = sqrt(n);
            cont++;
        }
        somma = somma + (int)radici;
    } while (n > 0);
    if (cont > 0)
    {
        printf("La somma è:\n");
        printf("%d", somma);
    }
    else
    {
        printf("Ha inserito un numero che non permette di effettuare il calcolo (nel dominio dei numeri reali)\n");
    }
    return 0;
}