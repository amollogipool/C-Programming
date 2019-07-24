/*Pointer: I always holds the addrees of another vari


able.
1] Typed Pointer: Points to specific type of data.
	EX. int* -------> int data.
	    double* -------> double data.
	    struct Emp* -------> Employee data.
2] UnTyped Pointer: It can point to any data. It aslo called as Generic Poiner.
  
    Ex. void*----------> Any Data.
    
    In pointer concept, whatever the operation we do. we need the help to two operators.
    1) & --> Address Operator./ Memory location of the variable that we have specified. that it will return.
    2) * --> Pointer Operator./ It returns the value which is inside a specified address. 
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int a=50; // i gets MA at some location.                           a
														       //   [ 50 ]
														       //    2046 --> Base address.
	int*  ptr; //Declared Integer Pointer Variable, why it is integer pointer. Because I want to point to integer data,so typed pointer is declared. 
	           // we can give any name to pointer. so ptr gets MA at some location.
	                                                           //    ptr
	ptr=&a;   // P Refers the address of a to Point to ML.      // [2046] ---> Hold the addres of variable a.
	                                                            //  3046 ---> Pointer Base Address.
    printf("The Value of variable is:%d\n",a); // ----> Value of variable a=50.
    printf("The Value of ptr is:%d\n",ptr); // ----> Value of ptr=2046.
    printf("The Address of variable a is:%d\n",&a); // ----> Address of variable a=2046.
	printf("The Address of ptr is:%d\n",&ptr); // ----> Address/Location of ptr=3046.
	printf("The Pointer to *ptr is:%d\n",*ptr); // -------------> 50. It returns the value which is inside the a specified address.
	printf("The Pointer to Address of a is:%d",*(&a)); // ---> 50.  
	return 0;
}
