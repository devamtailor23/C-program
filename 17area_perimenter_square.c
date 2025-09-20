#include <stdio.h>

int main(){

    float length;
    printf("enter length");
    scanf("%f", &length);

    printf("area of the square is: %f\n", length*length);
    printf("perimeter of the square is: %f", 4*length);

    return 0;

}