#include <stdio.h>
int main()
{
    int n;

    do
    {
        printf("Inserire numero");
        scanf("%d", &n);
    } while (n < 0);
    for (int i = -n; i <= n; i++)
    {
        printf("%d \n", i);
    }
    return 0;
}