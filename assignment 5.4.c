#include<stdio.h>

int main()
{
    int num = 1, count,n;
    float sum = 0.0, fact;
    printf("input n: ");
    scanf("%d",&n);

    while(num <= n)
    {
        fact = 1;
        for(count = 1; count <= num; count++)
        {
            fact = fact * count;
        }

        sum = sum + (1 / fact);

        num++;
    }

    printf("Sum of series is %f\n", sum);

    return 0;
}
