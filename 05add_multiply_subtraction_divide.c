#include <stdio.h>

int main(){

    float a,b;

    printf("enter a");
    scanf("%f", &a);

    printf("enter b");
    scanf("%f",&b);

    printf("the addition of a and b is: %f\n", a+b);
    printf("the subtraction of a and b is: %f\n", a-b);
    printf("the product of a and b is: %f\n", a*b);
    printf("the division of a and b is: %f\n", a/b);
    
    return 0;
}