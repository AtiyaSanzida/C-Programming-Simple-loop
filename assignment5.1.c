#include<stdio.h>

int main()

{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        switch (num%5)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        }

        num/=10;
    }

return 0;

}
