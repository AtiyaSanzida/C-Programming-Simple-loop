#include<stdio.h>

int main()

{
    int n,i=5,s=0;
    printf("Enter the last integer number: ");
    scanf("%d",&n);


    while(i<=n)
    {
        printf("+%d",(i*i));
        s=s+i*i;
        i=i+4;
    }
    printf("summation is %d",s);

    return 0;

}
