#include "stdio.h"

void soft(int number1, int number2)
{
    int i, j, flag;
    for (i = number1 + 1; i < number2; i++)
    {
        flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d \t", i);
        }
    }
}
int main()
{
    int number1, number2;
    printf("Enter two numbers\r\n");
    scanf("%d %d", &number1, &number2);
    printf("prime number between %dand%d\r\n", number1, number2);
    soft(number1, number2);

    return 0;
}
