#include <stdio.h>

int main()
{
    int n, t, sum = 0, remainder;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    t = n;

    while (t != 0)
    {
        remainder = t % 10;
        sum       = sum + remainder;
        t         = t / 10;
    }

    printf("Sum of digits of %d = %d\n", n, sum);



    int count=0;         //Declare a count variable

    for(int i=2;i<sum;i++)  //Check for factors
    {
        if(sum%i==0)
        count++;
    }
    if(count!=0)           //Check whether Prime or not
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }

    return 0;
}
