#include <stdio.h>
int main()
{
    int n;
    printf("Inserire un numero");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n \n", i);
    }
    return 0;
}