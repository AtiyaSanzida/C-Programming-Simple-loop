#include <stdio.h>

int main()
{
    int i,n,m;

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Even numbers from %d to %d are: \n", m, n);

    for(i=m; i<=n; i++)
    {
        if((i%2 == 0) && (i%3 != 0))
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    return 0;
}
