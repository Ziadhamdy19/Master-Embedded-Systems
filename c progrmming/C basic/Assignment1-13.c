#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter the  number\r\n");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
        sum += i;

    printf("%d ", sum);

    return 0;
}