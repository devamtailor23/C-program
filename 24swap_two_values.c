#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c; //temporary variable

    printf("Before swap: a = %d, b = %d\n", a, b);

    //swapping
    c = a;
    a = b;
    b = c;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}