#include <stdio.h>
int main()
{
    int n;
    printf("Inserire un numero");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d \n \n", i);
            }
        }
    }
    else
    {
        printf("Ha inserito un numero negativo!");
    }
    return 0;
}