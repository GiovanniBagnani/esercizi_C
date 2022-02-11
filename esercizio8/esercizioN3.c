#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Inserire N1");
    scanf("%d", &n1);
    printf("Inserire N2");
    scanf("%d", &n2);
    if (n2 > n1 && n1 > 0)
    {
        for (int i = n1; i <= n2; i++)
        {
            printf("%d \n \n", i);
        }
    }
    return 0;
}