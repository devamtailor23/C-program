#include <stdio.h>

int main(){

    float length, breadth;
    printf("enter length");
    scanf("%f", &length);

    printf("enter breadth");
    scanf("%f", &breadth);

    printf("area of the rectangle is: %f\n", length*breadth);
    printf("perimeter of the rectangle is: %f", 2*(length+breadth));

    return 0;

}