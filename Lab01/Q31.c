#include <stdio.h>

int main()
{
    int n, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1;n>0;i++)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("Sum of individual digits = %d", sum);

    return 0;
}