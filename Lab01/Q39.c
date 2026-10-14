#include <stdio.h>

int main()
{
    float sum = 0;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    float fact = 1;
    float i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + i / fact;
    }

    printf("Result = %.2f", sum);

    return 0;
}