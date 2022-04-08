#include <stdio.h>
#include <limits.h>
void inserimento(int numeri[], int lunghezza, int *pCont)
{
    *pCont = 0;
    int numero;
    for (int i = 0; numero != -1; i++)
    {
        printf("Inserire numero, inserire -1 per uscire:\n");
        scanf("%d", &numero);
        if (numero != -1)
        {
            numeri[i] = numero;
            *pCont++;
        }
    }
}
    void stampa(int numeri[], int *lunghezza)
    {
        for (int i = 0; i < *lunghezza; i++)
        {
            printf("%d \n", numeri[i]);
        }
    }

int main(int argc, char *argv[])
{
    int numeri[INT_MAX];
    int scelta, contElem;
    inserimento(numeri, INT_MAX, &contElem);
    do
    {
        printf("Premere 1 per mostrare il contenuto dell'array");
        printf("Premere 2 per inserire un elemento in coda");
        printf("Premere 3 per modificare un elemento");
        printf("Premere 4 per eliminare un elemento");
        printf("Premere 5 per ricercare un elemento");
        printf("Premere 0 per terminare");
        scanf("%d", &scelta);
        if (scelta == 1)
            stampa(numeri, &contElem);
        // else if (scelta == 2)

    } while (scelta != 0);
}