#include <stdio.h>

int main(){
    float p, n, r, i;
    printf("enter principal:");
    scanf("%f", &p);

    printf("enter time:");
    scanf("%f", &n);

    printf("enter rate of interest:");
    scanf("%f", &r);
    
    printf("interst is: %f", i=p*r*n);
    return 0;
}