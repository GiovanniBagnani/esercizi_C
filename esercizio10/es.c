#include<stdio.h>
#define DIM 4
int main(int argc, char*argv[])
{
    int array [DIM];
    int i;
    for(i = 0; i<DIM; i++)
    {
        printf("Inserire %d° numero:\n", i+1);
        scanf("%d", & array[i]);//popolo l'array
    }
    for(i = 0; i<DIM; i++)
    { 
    printf("\n %d", array[i]);
    }
}