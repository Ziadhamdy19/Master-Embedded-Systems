#include <stdio.h>
int main()
{
    float input1, input2, input3;
    printf("Enter three numbers\r\n");
    scanf("%f %f %f", &input1, &input2, &input3);
    if (input1 > input2 && input1 > input3)
    {
        printf("largest number is %f ", input1);
    }
    else if (input1 < input2 && input2 > input3)
    {
        printf("largest number is %f ", input2);
    }
    else
        printf("largest number is %f ", input3);

    return 0;
}