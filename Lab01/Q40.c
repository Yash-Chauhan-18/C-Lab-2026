#include <stdio.h>

int main()
{
    int i, n, a = 1, sum = 0;

    for(i = 1; a > 0; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n > 0)
        {
            sum = sum + n;
        }
        else
        {
            break;
        }
    }

    printf("Result = %d", sum);

    return 0;
}