#include <stdio.h>

int main(int argc, char *argv[])
{
    int numero1 = 0;
    int numero2 = 0;
    double rapporto = 0;
    do
    {
        printf("Inserire il primo numero\n");
        scanf("%d", &numero1); //legge il numero, d segna che legge un intero, % è il segnaposto
        printf("Inserire il secondo numero\n");
        scanf("%d", &numero2); //legge il secondo numero
        if (numero1 < numero2)
        {
            rapporto = numero1 / numero2;
        }

        else
        {
            rapporto = numero2 / numero1;
        }
        printf("Il risultato è " + rapporto);
    } while (numero1 != 0 && numero2 != 0);

    return 0;
}
