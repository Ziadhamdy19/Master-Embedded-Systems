#include <stdio.h>
int main()
{
    float input1;
    char res;
    printf("Enter the  number\r\n");
    scanf("%f", &input1);
    // if (input1 > 0)
    // {
    //     printf("%f is a postive number ", input1);
    // }
    // else if (input1 < 0)
    // {
    //     printf("%f is a negative number ", input1);
    // }
    // else
    // {
    //     printf("%f you entered Zero ", input1);
    // }

    // another solution
    if (input1 == 0)
        printf("you entered Zero");
    else
    {
        res = (input1 > 0) ? printf("%f is a postive number ", input1) : printf("%f is a negative number ", input1);
        printf("%c ", res);
    }
}