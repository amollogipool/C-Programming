/* 
What is Data Structure: It is of two types 1] Linear 2] Non-linear
It is a linear DS if elements are stored in a sequential manner. Examples: array, linked list, stacks, queues
It is a non-linear DS if the elements are not stored in a sequential manner. Examles: graphs, trees.

What is Array: collection of homogeneous type of elements, 
Means Either it may be integer type of elements.
or Either it may be float type of elements.
or Either it may be char type of elements.
or Either it may be double type of elements.
int a; It is a primitive variable declaration
a=10; then we have assign the a=20, means the value of variable gets updated.
so existing value of variable is replaced by new value.
so we can store only one value at a time, It is not possible to store the multiple values.
then how to rectify this problem by using array.

In array, we can store n no. of elements which are of similar types using only single variable.

Syntax: data_type array_name[size]={v1,v2,vn};

Example: int arr[5]; 
      
Now int is a data type means, we can store only integer types of elements into an array.
arr is the name of array so programmer is responsible to give the name to an array as per his requirement.
so Array is User Defined Data Type and aslo It is Derived Data Type.
SIZE : It is a size of array that we need to specify at the time of an array declaration,
If we don't specify the size for it then compiler will gives the error.
   
An array takes contiguous memory blocks to store series of values.

Example:                    0    1   2    3    4  <----Index of an array.
              arr        [ 10,  20, 30,  40,  50] <----Elements of an array.
            [2046]------>2046 2048 2050 2052 2054 <----Base Addresses of the memory location.
   so Here, arr will always hold the base address of first element so It is a Internal Pointer Variable.
   why because, It uses the Pointer Concept Implicitly.
    2046 is the Base address of First Element that hold by arr variable.
    
    Advantages:
    1.To store multiple values.
    2.To store element in a sequential manner.
    
    Disadvantages:
    1.Size is fixed.
    2.Only Homogeneous types of elements are allowed.
    3.Wastage of Momory.
    4.Less Performanace.
*/
#include <stdio.h>
#include <stdlib.h>
//1] int arr[5]; // Global Array Declaration: For global array variable, default integer value is 0.
           // So,Five Memory Location are initialized with 0.
           
     //Example:        0    1    2    3   4  <----Index of an array.
    //         arr  [ 0 |  0 |  0 |  0 | 0 ] <----By Default initialized with zero.
    
int main() {
	
	//Local Array Declaration: At the time of array declaration, If we want to assign some values into an array,
	//these we can directly assign by using assignment operator.
	//int arr[5]; //It we have not assigned any values to an array during delcaration then it will automatically
	//initilized with some Garbage Values.
	int i;
	int arr[5]={10,20,30,40,50}; //The initialization of an array, at the time of it's declaration.
	
	//int arr[3]={10,20}; //Here, arr size is 3 and we have assigned only 2 elements.
	//then what about remaining memory location, they are wasted, so wastege of memory.
	
	//Example:         0    1    2    3    <----Index of an array.
    //         arr  [ 10 | 20 |  0 |  0 ] <-----Remaining Memory Location are implicitly initialized with zero.
	
	//How to Read and How to Print an array elements.
	
	//Read
	/*for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	*/
    
    // Print
    for(i=0;i<5;i++){
    	printf("%d\n",arr[i]);
	}
	
	return 0;
}
