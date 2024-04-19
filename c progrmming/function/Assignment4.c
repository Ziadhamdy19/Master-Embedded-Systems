

#include "stdio.h"
int power(int number, int base)
{
    if (base != 0)
        return number * power(number, base - 1);

    else
        return 1;
}
int main()
{
    int number, base;
    printf("Enter the number \r\n");
    scanf("%d", &number);

    printf("Enter the base number \r\n");
    scanf("%d", &base);
    printf("the number is %d^%d=%d", number, base, power(number, base));
    return 0;
}