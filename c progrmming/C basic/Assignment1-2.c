#include <stdio.h>
int main()
{
    int input_from_user;
    printf("Enter a integer:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &input_from_user);
    printf("You entered: %d", input_from_user);
}