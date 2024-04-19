
#include "stdio.h"
char reverse(char ch[100])
{
    char y[100];
    int j = 0;
    int i = sizeof(ch) - 1;
    if (ch != '\0')
    {
        y[j] = ch[i];
        j++;
        reverse(ch[i - 1]);
    }
}
int main()
{
    char a[100];
    printf("Enrer sentence\r\n");
    for (int i = 0; i < sizeof(a) - 1; i++)
    {
        scanf("%c", a[i]);
    }

    scanf("%c", a);
    for (int i = 0; i < sizeof(a) - 1; i++)
    {
        printf("sentence before reverse  => sentence after reverce%c", reverse(a[i]));
    }
}
