#include <stdio.h>
int main()
{
    float matrix[100];
    int no_of_elements;
    int element_to_be_searched, i, found = 0;
    printf("Enter no of elements :");
    scanf("%d", &no_of_elements);
    for (i = 1; i <= no_of_elements; i++)
    {
        printf("%d :insert elements : ", i);
        scanf("%f", &matrix[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d", &element_to_be_searched);

    for (i = 1; i <= no_of_elements; i++)
    {

        if (matrix[i] == element_to_be_searched)
        {
            printf(" Number found at the location = %d", i);
            found = 1;
            break;
        }
    }
    if (1 != found)
        printf("not found");

    return 0;
}
