#include<stdio.h>

void RowSUM(int arr[10][10],int rows,int cols){
    int sum;
     for (int i = 0; i < rows; i++)
    {
     sum =0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        printf("The sum of row is %d: %d\n",i+1,sum);
    }
}
int main(){
    int rows,cols,arr[10][10];
    printf("Enter the rows and columns of the matrix respectively: ");
    scanf("%d%d",&rows,&cols);
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element %d%d: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
        
    }
    RowSUM(arr,rows,cols);
}