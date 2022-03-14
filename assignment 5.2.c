#include<stdio.h>

int main()

{
 int i,bin_num,decimal_num=0,rem;

 printf("Enter the binary number with the combination of 0s and 1s:\n");
 scanf("%d",&bin_num);

 printf("\n The binary number is %d",bin_num);

 for(i=0;bin_num!=0;++i)

 {
     rem = bin_num%10;
     bin_num=bin_num/10;
     decimal_num=decimal_num+(rem)*(pow(2,i));


 }

 printf("\n Conversion from binary to decimal number is %d",decimal_num);
    return 0;
}
