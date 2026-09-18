#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("Enter the third number : ");
    scanf(" %d", &c);
     
     if(a>b && a>c)
     printf("max element is %d",a);
     else if (b>a && b>c)
     printf("max element is %d",b);
     else 
     printf("max element is %d",c);
      
      return 0;
      }