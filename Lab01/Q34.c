// PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3...)
#include <stdio.h>

int main(){
    int a = 0, b = 1, n,next;
    printf("How many Fibonacci terms: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", a);
         next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

