#include <stdio.h>
#include <stdlib.h>
int rows,cols; 
int main()
{   
    int i,j;
	printf("Enter the size of rows:");
	scanf("%d",&rows);
	printf("Enter the size of cols:");
	scanf("%d",&cols);
    int arr[rows][cols];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
        printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
  
    printf("\nEntered 2-D array is: \n\n");
 
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%3d ", arr[i][j] );
        }
        printf("\n"); 
    }
    return 0;
}
