// PROGRAM TO CHECK WHETHER A NO. IS PALINDROME OR NOT.

#include <stdio.h>

int main()
{
    int n, r, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    

    for(int i=1;n>0;i++)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    printf("reverse number is %d",rev);

    return 0;
}