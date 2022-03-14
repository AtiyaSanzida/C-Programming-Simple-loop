#include <stdio.h>

int main()

{
    int sum=0,n;

    int i=2;
printf("enter the num: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum=(i*i*i);
        i=i+3;
    }
    printf("%d\n",sum);
    return 0;
}
