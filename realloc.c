#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr;
    int i;
    printf("Enter the size of array: \n");
    scanf("%d",&i);
    ptr = (int *)calloc(i ,sizeof(int));

    for ( int j = 0; j < i; j++)
    {
        printf("Enter the %d element of array:\n",j);
        scanf("%d",&ptr[j]);
    }
    for ( int j = 0; j < i; j++)
    {
        printf("The %d element of array is: %d\n",j,ptr[j]);
        
    }
    
    printf("Enter the size new of array: \n");
    scanf("%d",&i);
    ptr = (int *)realloc(ptr ,i*sizeof(int));

    for ( int j = 0; j < i; j++)
    {
        printf("Enter the %d element of array:\n",j);
        scanf("%d",&ptr[j]);
    }
    for ( int j = 0; j < i; j++)
    {
        printf("The %d element of array is: %d\n",j,ptr[j]);
        
    }
    
    free(ptr);
}
