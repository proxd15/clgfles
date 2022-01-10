#include <stdio.h>

void reverseArray(int arr[10])
{
    printf("The reverse array is: \n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[10] = {2, 4, 6, 5, 3, 3, 2, 7, 7, 9};
    printf("The array is : \n");
    for (int i = 0; i < 10; i++)
    {
         printf("%d ",arr[i]);
    }
    printf("\n\n");
    
   
    reverseArray(arr);
}