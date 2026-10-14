#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1;n>9;i++) {   
        sum = 0;

        for (int j=1;n>0;j++) {
            sum += n % 10;
            n = n/ 10;
        }

        n = sum;
    }

    printf("Single digit answer = %d\n", n);

    return 0;
    }