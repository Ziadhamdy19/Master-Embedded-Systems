#include <stdio.h>
int main()
{
    float input1, input2, Multiply;
    printf("Enter two numbers:");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &input1, &input2);
    Multiply = input1 * input2;
    printf("You entered: %f", Multiply);
}