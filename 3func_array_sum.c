#include <stdio.h>

int ArraySum(int arr[10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[10] = {2, 3, 4, 2, 3, 23, 1, 3, 3, 23};
    printf("%d", ArraySum(arr));
}