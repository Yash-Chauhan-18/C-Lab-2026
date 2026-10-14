// PROGRAM TO CHECK WHETHER A NO. IS PALINDROME OR NOT.

#include <stdio.h>

int main()
{
    int n, r, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if(rev == temp)
        printf("Palindrome number");
    else
        printf("Not a Palindrome number");

    return 0;
}