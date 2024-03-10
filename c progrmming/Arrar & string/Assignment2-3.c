#include <stdio.h>
int main()
{
    float matrix[100][100];
    float matrix2[100][100];
    int no_of_rows, no_of_columns;
    printf("Enter rows and column of matrix \r\n");
    scanf("%d %d", &no_of_rows, &no_of_columns);
    printf("Enter elements of matrix \r\n");
    for (int i = 1; i <= no_of_rows; i++)
    {
        for (int j = 1; j <= no_of_columns; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("matrix before transpose\r\n");

    for (int i = 1; i <= no_of_rows; i++)
    {
        for (int j = 1; j <= no_of_columns; j++)
        {
            printf("%.2f \t", matrix[i][j]);
        }
        printf("\r\n");
    }

    for (int i = 1; i <= no_of_rows; i++)
    {
        for (int j = 1; j <= no_of_columns; j++)
        {
            matrix2[i][j] = matrix[j][i];
        }
        printf("\r\n");
    }

    printf("matrix after transpose\r\n");

    for (int i = 1; i <= no_of_rows; i++)
    {
        for (int j = 1; j <= no_of_columns; j++)
        {
            printf(" %.2f", matrix2[i][j]);
        }
        printf("\r\n");
    }
    return 0;
}
