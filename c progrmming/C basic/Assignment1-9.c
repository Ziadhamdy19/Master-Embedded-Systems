#include <stdio.h>
int main()
{
    char input;
    printf("Enter an alphabet:\r\n");
    scanf("%c", &input);
    switch (input)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel ", input);
        break;

    default:
        printf("%c is a consonant", input);
        break;
    }
    return 0;
}
