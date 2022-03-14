#include<stdio.h>

int main()

{
     int sum=1,n,i,base;
     printf("Enter the base:");
     scanf("%d",&base);
     printf("Enter the power:");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
         sum=sum*base;

    }
    printf("The output is %d",sum);
    return 0;

}
