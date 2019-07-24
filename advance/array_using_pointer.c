#include <stdio.h>
#include <stdlib.h>

/* 
Pointer :- As the name itself is giving the explaination,
it is a variable which holds the memory address of the variable for which it is used.
ex:-
int variable=10;
int *pointer = &variable;
here variable is having the value =10 which must be located somewhere in the memory so that location must have the corresponding address.This address is the value of pointer.
For Pointer, “ * ” is used to make it different from normal variables. and the value assigned to it is address of variable which is written like ” &variable” here “&” is read as “addressOf” .
 
Uses and features:
Pointers provide direct access to memory.
It provides a way to return more than one value to the function.
Reduces the storage space and complexity of the program.
Reduces the execution time of the program.
Provides an alternative way to access array elements.
It allows us to perform the dynamic memory allocation. And allows us to re-size it too.
Address of objects can be extracted using pointers.
Pointers help us to build complex data structures like linked lists, queues, stacks, trees, graphs etc. 
 
int a=10, *p1,**p2;
p1=&a;
p2=&p1;
printf(“%d %d%d”,a,p1,p2):
 
 */

int main() {
	 
	 
	 //int variable = 10; 
     //int *pointer;  // not pointing at anything 
    // pointer = &variable;  // pointing at variables adress

	 int x=5;
	 int *p;
	 p=&x;
	 printf("The Address of x is:%d",&x);
	 printf("\nThe Value which is inside the address of x is:%d ",&x,p);
	 
	 int arr[]={1,2,3,4,5};
	 printf("1D Array:");
	 printf("\nThe Array using Pointer:%d",*arr);// It will gives an element which is located at 0th position.
     printf("\n1st Position:%d",*(arr+1));
     printf("\n2nd Position:%d",*(arr+2));
     printf("\n3rd Position:%d",*(arr+3));
     printf("\n4th Position:%d",*(arr+4));
     
     int arr1[2][3] = {
	               {1,2,3}, //0-Row
				   {4,5,6}, //1-Row
				  };
				  
	 printf("\n\n2D Array:");	  
	 printf("\nThe Array using Pointer:%d",*arr1[0]);//0-Row Counter. ---1
     printf("\n1st Position:%d",*arr1[1]); //1-Row Counter.----4
     
     printf("\n\nZero Row Counter:");
     printf("\n 00 Position:%d",*(arr1[0]+0)); //1-Row Counter.----1
     printf("\n 01 Position:%d",*(arr1[0]+1)); //1-Row Counter.----2
     printf("\n 02 Position:%d",*(arr1[0]+2)); //1-Row Counter.----3
     
     printf("\n\nOne Row Counter:");
     printf("\n 10 Position:%d",*(arr1[1]+0)); //1-Row Counter.----4
     printf("\n 11 Position:%d",*(arr1[1]+1)); //1-Row Counter.----5
     printf("\n 12 Position:%d",*(arr1[1]+2)); //1-Row Counter.----6
     
     printf("\n\nRow & Column Counter **arr1:");
     printf("\n 00 Position:%d",**arr1); //---1.
     printf("\n 10 Position:%d",**(arr1+1)); //Change the Row ---4
           
     printf("\n\n******");
     printf("\n 11 Position:%d", *(*(arr1+1)+1) ); //Change the Row ---5
     printf("\n 12 Position:%d", *(*(arr1+1)+2) ); //Change the Row ---6
     
	return 0;
}
