#include <stdio.h>

int main()
{
    int mi, ma, n, sum = 0;
    printf("enter minium: ");
    scanf("%d", &mi);
    printf("enter maxium: ");
    scanf("%d", &ma);
    printf("enter the common ratio: ");
    scanf("%d", &n);
    printf("the sum is: ");
    for (int i = mi; i <= ma; i = i * n)
    {
        if ((i * n) < ma)
        {
            printf("%d + ", i);
        }
        else if ((i * n) >= ma)
        {
            printf("%d = ", i);
        }
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
