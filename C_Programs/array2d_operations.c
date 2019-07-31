#include <stdio.h>
void print(int ptr[3][3] , int row, int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nArray [%d][%d] : %d",i,j,ptr[i][j]);  
			fflush(stdout);
        }
        printf("\n");
    }
}

// main function
int main()
{
  // Declare a 2D array and initialize the three rows
  int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
  // Passing 2D-array and number of columns and rows to Function
  print(array,3,3);
  return 0;
}
/*#include <stdio.h>
const int M = 3;
const int N = 3;
void print(int arr[M][N])
{
 int i, j;
 for (i = 0; i < M; i++)
 for (j = 0; j < N; j++)
 printf("%d ", arr[i][j]);
}

int main()

{

 int arr[][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

 print(arr);

 return 0;

}*/
/*
int getLength(int arr[]){
	int i,len=0;
	for(i=0;i<MAX;i++){
		len++;
	}
	return len;
}

void sum(int arr[]){
	int i,sum=0;
	for(i=0;i<MAX;i++){
		sum+=arr[i];
	}
	printf("The sum of array element is:%d\n",sum);
}

void largest(int arr[]){
	int i,large=0;
	for(i=0;i<MAX;i++){
		if(arr[i]>large){
			large=arr[i];
		}
	}
	printf("The Largest element is:%d\n",large);
}

void sort(int arr[]){
	int i,j,temp=0;
	for(i=0;i<MAX;i++){
	    for(j=i+1;j<MAX;j++){
	    	if(arr[i]>arr[j]){
	    	temp=arr[i];
	    	arr[i]=arr[j];
	    	arr[j]=temp;
		   }
	    }
	}
	printf("Ascending : ");                     
	for(i=0;i<MAX;i++){
		printf("\t%d",arr[i]);
	}
	
	for(i=0;i<MAX;i++){
	    for(j=i+1;j<MAX;j++){
	    	if(arr[i]<arr[j]){
	    	temp=arr[i];
	    	arr[i]=arr[j];
	    	arr[j]=temp;
		   }
	    }
	}
	printf("\nDescending : ");                     
	for(i=0;i<MAX;i++){
		printf("\t%d",arr[i]);
	}
}

void search(int arr[],int num){
	int i;
	for(i=0;i<MAX;i++){
		if(arr[i]==num){
			printf("The element %d is present at %dth position.\n\n",num,i+1);
			return;
		}
	}
	if(i==MAX){
			printf("The element %d is not present in the array.\n\n",num);
	}
	
}

void insert(int arr[], int loc, int num){
   int i;
   for(i= MAX - 1; i>loc; i--)
   {
   	arr[i+1] = arr[i];
    arr[loc] = num;
   }
   printf("Array after inserting element:\n");
   display(arr);
}*/

/*
#include <stdio.h>
#include <stdlib.h>
void read(int arr[][], int rows, int columns);
void print(int arr[][], int rows, int columns);
int rows, columns;
int main() {
	printf("Enter the number of rows:\n");
	scanf("%d",&rows);
	printf("Enter the number of columns:\n");
	scanf("%d",&columns);
	int arr[rows][columns];
	read(arr,rows,columns);
	print(arr,rows,columns);
	return 0;
}

void read(int arr[][], int rows, int columns){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("Enter the values at arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void print(int arr[][], int rows, int columns){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
		//	printf("%d",arr[i][j]);
			printf("The arr[%d][%d]=%d\t\n",i,j,arr[i][j]);
		}
		printf("\n------------------------");
	}
}*/
