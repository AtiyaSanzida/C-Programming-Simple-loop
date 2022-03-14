#include<stdio.h>

int main ()

{
    int m,a,r,s,n;
    printf("Enter the maximum number:");
    scanf("%d",&m);
    printf("Enter the minimum number:");
    scanf("%d",&a);
    printf("Enter the difference:");
    scanf("%d",&r);


    n=((m-a)/r)+1;
      s=(n*(a+m)/2);

        printf("The sum is:%d",s);

return 0;
}
