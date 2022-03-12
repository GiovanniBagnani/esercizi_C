#include<stdio.h>
#define DIM 5
/*void inverti(int a[], int i)
{
int temp, j=1;
for(i = 0; i<DIM; i++)
{
    temp = a[i];
    a[i] = a[DIM-j];
    a[DIM-j]=temp;
    j++;
}
}**/
int main(int argc, char*argv[])
{
int array[DIM];
int i;
for(i=0; i<DIM; i++)
{
    printf("\nInserire numero: ");
    scanf("%d", &array[i]);
    //scanf("inserire %d° numero: %d", &i, &array[i]);
}
//inverti(int array[5], i);
for(i=DIM-1; i>=0; i--)
{
    printf("%d \n", array[i]);
}
}