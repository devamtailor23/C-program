#include <stdio.h>

//conversion of rupees to dollar where 1$ is 48 Rs.

int main(){

    float rupees;
    printf("enter rupees");
    scanf("%f",&rupees);

    printf("rupees conversion to dollar is: %f",  rupees/48);
    printf(" dollar");

    return 0;

}