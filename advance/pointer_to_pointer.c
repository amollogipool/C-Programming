/*C program to demonstrate example of double pointer (pointer to pointer).
As we know that, pointers are the special type of variables that are used to store the address of another variable.
But, when we need to store the address of a pointer variable, 
we cannot assign it in a pointer variable. To store address of a pointer variable, 
we use a double pointer which is also known as pointer to pointer.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;          //integer variable
    int *p1;            //pointer to an integer
    int **p2;           //pointer to an integer pointer
     
    p1=&a;          //assign address of a
    p2=&p1;         //assign address of p1
     
    a=100;          //assign 100 to a
     
    //access the value of a using p1 and p2
    printf("\nValue of a (using p1): %d",*p1);
    printf("\nValue of a (using p2): %d",**p2);
     
    //change the value of a using p1
    *p1=200;
    printf("\nValue of a: %d",*p1);
    //change the value of a using p2
    **p2=200;
    printf("\nValue of a: %d",**p2);
    return 0;
}
