/*
C Language Pointers -Pointers are the main and very useful feature of C programming.
Pointers are special kind of variable by its amazing features;
these are the variables that can store address of another variable.
Pointers can stores address of another variables, 
can access value of that variable (which address is stored in the pointer variable), 
can assign value to that variable too.

Here are some features of pointers:
By using pointers we can get multiple values from the function, 
as we know a function can return only one value but by passing arguments as pointers we can get more than one values from the pointer.
By using pointers dynamic memory can be created according to the program use.
We can save memory from static (compile time) declarations.
By using pointers we can design and develop complex data structures like STACK, QUEUE, LINKED LIST etc.
Amazing feature of pointes: Pointers provide direct memory access.
Here are some disadvantages of the pointers

Since pointers has many features but there are some disadvantages of pointers
Failed to protect memory addresses (locations) - 
Since pointer can access direct memory so memory cannot be protected.
Uninitialized pointers can cause of segmentation fault.
Pointers variables are slower than normal variables.
Pointers always required Free Memory for Dynamically Allocated Memory.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n=10;
	int *p;
	p=&n;
	n=50;
	printf("value of num: %d\naddress of num: %u\n",n,&n);
	printf("value of num: %d\naddress of num: %u\n",*p,p);
	return 0;
}
