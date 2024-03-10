#include <stdio.h>
int main()
{
    float input1, input2;
    printf("Enter two numbers:");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &input1, &input2);
    input1 = input1 + input2;
    input2 = input1 - input2;
    input1 = input1 - input2;
    printf("After swapping, value of a =%f\r\n After swapping, value of b =%f", input1, input2);
}
