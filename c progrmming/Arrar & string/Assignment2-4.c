#include <stdio.h>
int main()
{
    float matrix[100];
    int no_of_elements;
    int element_to_be_inserted, i, location;
    printf("Enter no of elements :");
    scanf("%d", &no_of_elements);
    for (i = 1; i <= no_of_elements; i++)
    {
        printf("%d :insert elements : ", i);
        scanf("%f", &matrix[i]);
    }
    printf("Enter the element to be inserted :");
    scanf("%d", &element_to_be_inserted);

    printf("Enter the location :");
    scanf("%d", &location);
    for (int i = 0; i <= location; i++)
    {
        matrix[location] = element_to_be_inserted;
    }
    for (i = 1; i <= no_of_elements; i++)
    {
        printf("%d :insert elements => %.1f: \r\n", i , matrix[i]);
    }
    return 0;
}