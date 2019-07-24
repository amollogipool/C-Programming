/* 
There are several operations that can be performed on an array.
1] Traversal: Processing each element in the array.
2] Search: Finding the location of an element with a given value.
3] Insertion: Adding a new element to an array.
4] Deletion: Removing an element from an array.
5] Sorting: Organizing the elements in some order.
6] Merging: Combining two arrays into a single array.
7] Reversing: Reversing the elements of an array.
*/ 
#include <stdio.h>
#include <stdlib.h>
void read (int []);//No need to pass the name of array, It is optional.
void display(int []);
int getLength(int []);
void sum(int []);
void largest(int []);
void sort(int []);
void search(int [], int num);
void insert(int [], int loc, int num);
//void del (int*, int pos);
int MAX;
int main() {
	int num,loc,length;
	printf("Enter the size of array:\n");
	scanf("%d",&MAX);
	int arr[MAX];
	read(arr);
	display(arr);
	length = getLength(arr);
    printf("The length of array is:%d\n",length);
	sum(arr);
	largest(arr);
	sort(arr);
	printf("\nEnter number to check whether it is present in array or not:\n");
	scanf("%d",&num);
	search(arr,num);
    printf("Enter the location where you wish to insert an element:\n");
    scanf("%d",&loc);
    printf("Enter the value to insert\n");
    scanf("%d", &num);
	insert(arr,loc,num);
	return 0;
}

void read(int arr[]){
	    int i;
		for(i=0;i<MAX;i++){
		printf("Enter %d element of an array\n:",i+1);
		scanf("%d",&arr[i]);
	}
}

void display(int arr[]){
	int i;
	for(i=0;i<MAX;i++){
		printf("The arr[%d]=%d\t\n",i,arr[i]);
	}
}
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
}
