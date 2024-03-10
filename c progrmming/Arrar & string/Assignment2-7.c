#include <stdio.h>
int main()
{
    char x[100];
    int sum = 0;
    gets(x);
    for (int i = 0; x[i] != '\0'; i++)
    {
        sum++;
    }
    printf("length of strinh is %d", sum);
}
