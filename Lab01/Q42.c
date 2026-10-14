#include <stdio.h>

int main()
{
    int n, i, t = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Neither prime nor composite");
    }
    else
    {
        for(i = 2; i < n-1; i++)
        {
            if(n % i == 0)
            {
                t = 1;
                break;
            }
        }

        if(t == 0)
            printf("Prime number");
        else
            printf("Composite number");
    }

    return 0;
}