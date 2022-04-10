#include <stdio.h>
#include <limits.h>
void inserimento(int numeri[], int *pCont)
{
    int numero;
    for (int i = 0; numero != -1; i++)
    {
        printf("Inserire numero, inserire -1 per uscire:\n");
        scanf("%d", &numero);
        if (numero != -1)
        {
            numeri[i] = numero;
            ++(*pCont);
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
void coda(int numeri[], int *lunghezza)
{
    int numero, indice;
    indice = (*lunghezza)++;
    printf("Inserire elemento in coda:\n");
    scanf("%d", &numero);
    numeri[indice] = numero;
}
void modifica(int numeri[], int *lunghezza)
{
    int numero;
    int posizione;
    printf("Inserire la posizione del valore da modificare:\n");
    scanf("%d", &posizione);
    if (posizione <= *lunghezza)
    {
        printf("Inserire nuovo valore:\n");
        scanf("%d", &numero);
        numeri[posizione] = numero;
    }
}
void elimina(int numeri[], int *lunghezza)
{
    int posizione;
    printf("Inserire la posizione del valore da eliminare:\n");
    scanf("%d", &posizione);
    if (posizione <= *lunghezza)
    {
        for (int i = posizione; i < *lunghezza; i++)
        {
            numeri[i] = numeri[i + 1];
        }
    }
}
int ricerca(int numeri[], int *lunghezza)
{
    int elemento;
    int i;
    printf("Inserire l'elemento da ricercare:\n");
    scanf("%d", &elemento);
    for (i = 0; i < *lunghezza; i++)
    {
        if (numeri[i] == elemento)
            return i;
    }
    return -1;
}
void Posizione(int numeri[], int *lunghezza)
{
    int numero;
    int posizione;
    printf("Inserire la posiione in cui inserire l'elemento: \n");
    scanf("%d", &posizione);
    printf("Inserire il numero: \n");
    scanf("%d", &numero);
    numeri[posizione] = numero;
}
void inverso(int numeri[], int *lunghezza)
{
    for (int i = *lunghezza; i >= 0; i--)
    {
        printf("\n%d", numeri[i]);
    }
}
int main(int argc, char *argv[])
{
    int numeri[SHRT_MAX];
    int contElem, scelta, posizione;
    inserimento(numeri, &contElem);
    do
    {
        // printf("\n\n %d \n\n\n", contElem);
        printf("\nPremere 1 per mostrare il contenuto dell'array");
        printf("\nPremere 2 per inserire un elemento in coda");
        printf("\nPremere 3 per modificare un elemento");
        printf("\nPremere 4 per eliminare un elemento");
        printf("\nPremere 5 per ricercare un elemento");
        printf("\npremere 6 per inserire un elemento in una certa posizione");
        printf("\npremere 7 per mostrare il contenuto dell'array all'inverso");
        printf("\nPremere 0 per terminare\n\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        printf("\n\n");
        if (scelta == 1)
            stampa(numeri, &contElem);
        else if (scelta == 2)
            coda(numeri, &contElem);
        else if (scelta == 3)
            modifica(numeri, &contElem);
        else if (scelta == 4)
            elimina(numeri, &contElem);
        else if (scelta == 5)
        {
            posizione = ricerca(numeri, &contElem);
            printf("numero in posizione: %d\n\n", posizione);
        }
        else if (scelta == 6)
            Posizione(numeri, &contElem);
        else if (scelta == 7)
            inverso(numeri, &contElem);

    } while (scelta != 0);
    return 0;
}
