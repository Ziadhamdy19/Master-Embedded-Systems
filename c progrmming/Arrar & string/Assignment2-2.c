#include <stdio.h>
int main()
{
    float matrix[100],sum=0,avg=0;
    int number_of_data;
    printf("Enter the number of data \r\n");
    scanf("%d",&number_of_data);
    for (int i = 0; i < number_of_data; i++)
    {
        printf("enter number\r\n");
        scanf("%f",&matrix[i]);
        sum+=matrix[i];
    }
    avg=sum/number_of_data;
    printf("average = %f",avg);
    return 0;
}