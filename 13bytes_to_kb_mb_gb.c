#include <stdio.h>

int main(){
    float bytes;
    printf("enter bytes");
    scanf("%f", &bytes);

    printf("number of kb: %f\n", bytes*1000);
    printf("number of mb: %f\n", bytes*1000000);
    printf("number of gb: %f", bytes*1000000000);

    return 0;

}