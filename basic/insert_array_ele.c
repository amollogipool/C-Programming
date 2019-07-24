/* 
C Program to insert new element in an array
 */
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,loc,value;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++){
	 printf("Enter %d element in an array:\n",i+1);
	 scanf("%d",&arr[i]);
	}
	printf("The array elements are:");
	for(i=0;i<n;i++){
	printf("\t%d",arr[i]);
	}
   printf("\nEnter the location where you wish to insert an element\n");
   scanf("%d", &loc);
   printf("Enter the value to insert\n");
   scanf("%d", &value);
   for (i= n - 1; i>= loc; i--)
   {
   	arr[i+1] = arr[i];
    arr[loc] = value;
   }
  printf("After adding element in an array:");
  for(i=0;i<n;i++){
  	printf("\t%d",arr[i]);
  }
 return 0;
}
