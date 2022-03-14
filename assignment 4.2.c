#include<stdio.h>

int main()
{
    int i,sum=0;

    for (i = 10000;i >= 3; i/=5)
    {
        printf("%d+",i);
        sum=sum+i;
    }
    printf("\nSum of the following series = %d",sum);
    return 0;
}
