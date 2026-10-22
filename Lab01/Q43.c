

#include <stdio.h>

int main()
{
    float sales, commission;

    printf("Enter sales amount: ");
    scanf("%f", &sales);

    if (sales <= 500)
    {
        commission = sales * 5 / 100;
    }
    else if (sales <= 2000)
    {
        commission = 35 + (sales - 500) * 10 / 100;
    }
    else if (sales <= 5000)
    {
        commission = 185 + (sales - 2000) * 12 / 100;
    }
    else
    {
        commission = sales * 12.5 / 100;
    }

    printf("Commission = Rs. %.3f", commission);

    return 0;
}