#include <stdio.h>
#include <stdlib.h>

/*
Call By value and call by reference
*/
void swap(int *x, int *y);
int main() {
	int a=10,b=20;
	 //print values before swapping
    printf("Before Swapping: a=%d, b=%d\n",a,b);
    //call function by passing addresses of a and b.
	swap(&a,&b);
	printf("After Swapping: a=%d, b=%d\n",a,b);
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

