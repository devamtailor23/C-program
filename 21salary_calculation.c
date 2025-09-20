#include <stdio.h>

int main(){

    float grosssalary;
    printf("enter gross salary");
    scanf("%f", &grosssalary);

    float allowances = 0.1*grosssalary;
    float deductions = 0.03*grosssalary;

    printf("net salary is: %f\n", grosssalary + allowances - deductions);

    return 0;

}