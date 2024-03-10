#include <stdio.h>
int main()
{
    float matrix[2][2];
    float matrix2[2][2];
    float matrix3[2][2];
    printf("Enter elements of matrix \r\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %2.2f", matrix[i][j]);
        }
        printf("\r\n");
    }
    printf("Enter elements of matrix \r\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%f", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %2.2f", matrix2[i][j]);
        }
        printf("\r\n");
    }
    printf("sum of matrix \r\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix3[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %2.2f", matrix3[i][j]);
        }
        printf("\r\n");
    }
}