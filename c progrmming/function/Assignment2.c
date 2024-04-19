#include "stdio.h"
int factorial(int number)
{
    if (number > 1)
        return number * factorial(number - 1);

    else
        return 1;
}
int main()
{
    int number;
    printf("Enter Postive number \r\n");
    scanf("%d", &number);
    printf("factorial is %d", factorial(number));
    return 0;
}
