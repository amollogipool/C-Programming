/*
1] Two dimensional arrays:-
A 2D arrays has a type such as int[][] or String [][], with two pairs of square brackets. 
A matrix can be represented as a table of rows and columns.
Syntax: datatype array_name[ROW][COL];
The total number of elements in a 2-D array is ROW*COL.
If you try to access an element beyond valid ROW and COL , 
C compiler will not display any kind of error message, instead, 
a garbage value will be printed. It is the responsibility of the programmer to handle the bounds.

int x[3][4];
Elements in two-dimensional arrays are commonly referred by x[i][j] 
where i is the row number and ‘j’ is the column number.

1) First Method:
int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};

The above array have 3 rows and 4 columns. 
The elements in the braces from left to right are stored in the table also from left to right. 
The elements will be filled in the array in the order,
first 4 elements from the left in first row, 
next 4 elements in second row and so on.

2] Better Method:
int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
This type of initialization make use of nested braces. Each set of inner braces represents one row. 
In the above example there are total three rows so there are three sets of inner braces.
 */
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j; /*Counter variables for the loop*/
	//int arr[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};             /* 2D array declaration*/
	int arr[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};      /* 2D array declaration*/
    //int arr[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
	for(i=0;i<3;i++){	
	    printf("\n");
		for(j=0;j<4;j++){
			printf("%d\t",arr[i][j]);
			//printf("arr[%d][%d]=%d\t",i,j,arr[i][j]);
		}
	}
	return 0;
}
