/*
WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA.
*/

#include <stdio.h>

int main(){
    float m, p, c, e;
    printf("Enter the marks of Maths out of 200 : ");
    scanf("%f", &m);
    printf("\n");
    
    printf("Enter the marks of Physics out of 200 : ");
    scanf("%f", &p);
    printf("\n");
    
    printf("Enter the marks of Chemistry out of 200 : ");
    scanf("%f", &c);
    printf("\n");

    printf("Enter the marks of English out of 100 : ");
    scanf("%f", &e);
    printf("\n");

    float cm = m/2 + p/2 + c/2 + e;
    
    printf("The cut off marks of the student is %f ", cm);
    

    return 0;
}