#include <stdio.h>

int main()
{
    int n, d, nom = 1, denom = 1;

    printf("enter the n: ");
    scanf("%d", &n);
    printf("enter the d: ");
    scanf("%d", &d);
    if ((n >= d))
    {
        for (int i = n; i; i--)
        {

            nom = nom * i;
        }
        for (int i = n - d; i; i--)
        {

            denom = denom * i;
        }

        printf("npr = %d\n", nom / denom);
    }
    else
    {
        printf("The math is error!");
    }

    return 0;
}
