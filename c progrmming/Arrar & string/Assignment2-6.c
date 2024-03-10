#include <stdio.h>
int main()
{
    char x[100];
    char character;
    int sum = 0;

    printf("Enter a string \r\n");
    gets(x);

    printf("Enter a character to fint frequency : \r\n");
    scanf("%c", &character);

    for (int i = 1; i <= sizeof(x); i++)
    {
        if (x[i] == character)
        {
            sum++;
        }
    }
    printf(" frequency is :%d", sum);
}
