#include <stdio.h>

int main()
{

    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d \n", reverse);



    int count=0;

    for(int i=2;i<reverse;i++)
    {
        if(reverse%i==0)
        count++;
    }
    if(count!=0)
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }

    return 0;
}
