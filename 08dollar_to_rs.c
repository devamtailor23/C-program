#include <stdio.h>

//conversion of dollar to rupees where 1$ is 48 Rs.

int main(){

    float dollar;
    printf("enter dollar");
    scanf("%f",&dollar);

    printf("dollar conversion to rupees is: %f",  dollar*48);
    printf(" rupees");

    return 0;

}