#include <stdio.h>

int main(){
    float f;
    printf("enter fahrenheit temperature:");
    scanf("%f", &f);

    float c = 0.55*(f-32);

    printf("celcuis temperature is: %f", c);
    return 0;
}