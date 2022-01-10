#include <stdio.h>

void printArray(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printArray(arr);
}