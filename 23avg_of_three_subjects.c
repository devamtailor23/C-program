#include <stdio.h>

int main(){

    float subject1, subject2, subject3;
    printf("enter subject 1 marks");
    scanf("%f", &subject1);

    printf("enter subjct 2 marks");
    scanf("%f", &subject2);

    printf("enter subject 3 marks");
    scanf("%f", &subject3);
    
    printf("average of three subjects is: %f\n", (subject1 + subject2+ subject3)/3);

    return 0;

}