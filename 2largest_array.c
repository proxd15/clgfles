#include <stdio.h>

void LargestElement(int arr[10])
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The largest number in the array is : %d \n", temp);
}
int main()
{
    int arr[10] = {19, 4, 87, 5, 180, 4, 3, 2, 7, 8};
    printf("The array is : \n");
    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    LargestElement(arr);
}