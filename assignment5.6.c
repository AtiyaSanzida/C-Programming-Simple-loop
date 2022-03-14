#include <stdio.h>

int main()
{
    float total_price = 0;
    float total_amount = 0;

    float price, amount ;

    while (1)
    {
        printf("Enter the amount (in KG): ");
        scanf("%f", &amount);

        if(amount < 0)
        {
            printf("Invalid Input.Enter a positive number.\n");
            continue ;
        }

        else if (amount == 0)
            break ;

        printf("Enter the price: ");
        scanf("%f", &price);

        if(price < 0)
        {

            printf("Invalid Input.Enter a positive number.\n");
            continue ;
        }

        total_amount = total_amount + amount ;
        total_price = total_price + price ;

        printf("\n");
    }

    float Average = (total_price / total_amount);

    printf("\n");

    printf("Total Amount(in kg): %0.2f \n", total_amount);
    printf("Total Price: %0.2f \n", total_price);
    printf("Average price per KG : %0.2f \n", Average);

    return 0;

}
