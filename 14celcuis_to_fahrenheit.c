#include <stdio.h>

int main(){
    float c;
    printf("enter celcius temperature:");
    scanf("%f", &c);

    float f = (1.8*c)+32;

    printf("fahrenheit temperature is: %f", f);
    return 0;
}