#include <stdio.h>

int main()
{
    int base;
    int power;
    int result;
    int i;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    result = 1;

    for(i = 1; i <= power; i++)
    {
        result = result * base;
    }

    printf("Result = %d", result);

    return 0;
}