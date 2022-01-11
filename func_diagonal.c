#include <stdio.h>

void Diagonal(int arr[10][10], int rows, int cols)
{
    printf("The diagonal elements are: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                printf("%d\n", arr[i][j]);
            }
        }
    }
}
int main()
{
    int rows, cols, arr[10][10];
    printf("Enter the rows and columns of the matrix respectively: ");
    scanf("%d%d", &rows, &cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element %d%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    Diagonal(arr, rows, cols);
}