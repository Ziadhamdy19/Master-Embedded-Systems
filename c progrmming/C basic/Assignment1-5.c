#include <stdio.h>
int main()
{
    char input1;
    printf("Enter the character:");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &input1);
    printf("You entered: %d", input1);
}
