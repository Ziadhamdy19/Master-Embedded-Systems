#include <stdio.h>
int main()
{
    int input1, input2, sum;
    printf("Enter two integers:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d", &input1, &input2);
    sum = input1 + input2;
    printf("You entered: %d", sum);
}