#include <stdio.h>
#include <stdlib.h>

int ricerca(int numero, int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        if (atoi(argv[i]) == numero)
        {
            return i;
        }
    }
    return -1;
}
int main(int argc, char *argv[])
{
    int numero;
    printf("Inserire un numero da ricercare:\n");
    scanf("%d", &numero);
    int posizione = ricerca(numero, argc, argv);
    if (posizione > 0)
    {
        printf("\n\n Il numero ricercato si trova in posizione: %d", posizione);
    }
    else
    {
        printf("Il numero ricercato non è presente!\n\n");
    }
}
