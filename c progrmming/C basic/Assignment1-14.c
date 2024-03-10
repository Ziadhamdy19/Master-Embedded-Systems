#include <stdio.h>
int main()
{
    int number, mult = 1;
    printf("Enter the  number\r\n");
    scanf("%d", &number);
    if (number < 0)
        printf("factorial does not exist ");

    else if (number == 0)
        printf("1");

    else
    {
        for (int i = 1; i <= number; i++)
            mult *= i;

        printf("%d ", mult);
    }

    return 0;
}