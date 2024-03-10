#include <stdio.h>
int main()
{
    int input;
    printf("enter an integer num to check:");
    fflush(stdout);
    scanf("%d", &input);
    if (input % 2 == 0)
    {
        printf("%d is even num", input);
    }
    else
    {
        printf("%d is odd num ", input);
    }
    return 0;
}
