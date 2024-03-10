#include <stdio.h>
int main()
{
    float input1, input2, operation;
    char operator;

    printf("Enter input one and two\r\n");
    scanf("%f %f", &input1,&input2);
    fflush(stdin);
    fflush(stdout);
    printf("Enter the operator\r\n");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
    {
        operation = input1 + input2;
        printf("%.2f", operation);
    }
    break;

    case '-':
    {
        operation = input1 - input2;
        (operation == 0) ? printf("%.0f", operation) : printf("%.2f", operation);
    }
    break;

    case '*':
    {
        operation = input1 * input2;
        printf("%.2f", operation);
    }
    break;
    case '/':
    {
        operation = input1 / input2;
        printf("%.2f", operation);
    }
    break;
    default:
        printf("try again");
        break;
    }

    return 0;
}