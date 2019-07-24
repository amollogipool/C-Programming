/* 
1] Call By Value: Means Calling a function by passing values as a parameter to the function.
   -> The Copy of Actual Parameters is passed to the Formal Parameters.
   -> If we done any modification in Lacal function, It will not reflected because of,
    They are stored at different memory location.
    Local Variable are accessible only within the local function, Not the outside the function.
    
2] Call By Reference: Means Calling a Function by passing the reference/address/location as a Param to function.
   -> The Address of Actual Parameters is passed to the Formal Parameters.
   -> If we done any modification in Lacal function, It will reflected because of,
    They are stored at same memory location.
    So the value of local variable can be accessible within the function and outside the function aslo.  
*/
#include <stdio.h>
#include <stdlib.h>
void swapByValue(int, int); //No Need to pass the variable name, Only Which type of data that we need to pass.
void swapByReference(int*, int*);
int main() {
	
	int a=10,b=20;
	printf("Before Swapping:\na=%d and b=%d",a,b);
	swapByValue(a,b);
	swapByReference(&a,&b);
	printf("\nAfter Swapping inside Main Function:\na=%d and b=%d",a,b);
	
	//printf("\nAfter Swapping inside Main Function:\na=%d and b=%d",x,y);// 
	//The value of variable can't be accessible from outside the function.
	//Error: x and y are undeclared.
	return 0;
}

void swapByValue(int x, int y){ // We can use the same variable(a,b) as a parameter,No problem.
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\nAfter Swapping inside swapByValue Function:\na=%d and b=%d",x,y);
}

void swapByReference(int* x, int* y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\nAfter Swapping inside swapByReference Function:\na=%d and b=%d",*x,*y);
}
