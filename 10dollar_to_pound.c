#include <stdio.h>

//conversion of dollar to pound through rupees where 1$ is 48 rupees  

int main(){

    float dollar;

    printf("enter dollar");
    scanf("%f", &dollar);

    float rupees = 48*dollar;

    float pound = 70*rupees;

    printf("dollar conversion to pound is:%f", pound);

    return 0;
}