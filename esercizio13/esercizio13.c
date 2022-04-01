#include<stdio.h>
#include<stdlib.h>
int posizione (int n, int lunghezza, char*argv[])
{
    for(int i = 1; i<lunghezza;i++)
    {
        if(atoi(argv[i]) == n)
        {
            return i;
        }
    }
    return -1;
}
int main (int argc, char*argv[])
{
    int numero;
    printf("Inserisca il numero da trovare: ");
    scanf("%d", &numero);
    int posizioneN = posizione(numero, argc, argv);
    if(posizioneN < 0)
    {
        printf("Il numero %d non è presente \n\n", numero);
    }
    else
    {
        printf("Il numero %d si trova in posizione %d \n\n", numero, posizioneN);
    }
}