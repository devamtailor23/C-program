#include <stdio.h>

int main(){

    float grosssales;
    printf("enter gross sales");
    scanf("%f", &grosssales);

    printf("net sales is: %f\n", grosssales - 0.1*grosssales);


    return 0;

}