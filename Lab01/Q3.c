#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.15 * basic;
    da = 0.40 * basic;

    gross = basic + hra + da;

    printf("your HRA = %.1f\n",hra);
    printf("your DA= %.2f\n",da);
    printf("your Gross Salary = %.2f\n", gross);

    return 0;
}