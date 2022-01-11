#include <stdio.h>

void Transpose(int arr[10][10], int rows, int cols)
{
    int transpose[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    printf("THe transpose of the matrix is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
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
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    Transpose(arr, rows, cols);
}