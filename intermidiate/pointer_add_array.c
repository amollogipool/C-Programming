#include <stdio.h>
#include <stdlib.h>
/* p is a pointer it contains the space of memory where the first value of the array is contained. 
if you print p you will see a number like 1606416192, 
this space of memory contains the first value of the array, 
in your case the value 1. 
You can access to the other spaces of memory with  p[1], p[2]. 
Also, you can use *p to access to the first space of memory: 
for example
printf("%d", *p + 1);

will access to the second space of memory (the second value):
*p is the same as p[0]
*(p + 1) is the same as p[1]
*(p + 2) is the same as p[2]

the line 
    sum += *p + *q; 
change to 
   sum += p[i] + q[i];

or

sum += *(p + i) + *(q + i);

or

sum += *(p++) + *(q++) */

int main() {

    int arr1[5] = { 1, 12, 3, 4, 7};

    int arr2[5] = {10, 11, 2, 8, 5};

    int *p, *q, *p_tmp, *q_tmp;

    int nElement = 0, sum = 0, sum2 = 0, sum3 = 0;

    p = arr1;

    q = arr2;

    p_tmp = arr1;

    q_tmp = arr2;

    for (nElement = 0; nElement < 5; nElement++) {

        sum += *(p + nElement) + *(q + nElement);

    }

    for (nElement = 0; nElement < 5; nElement++) {

        sum2 += p[nElement] + q[nElement];

    }

    printf("The sum is: %d %d \n", sum, sum2);

    printf ("Size of int: %d bytes\n",sizeof(int));

    printf("Memory address\t\t| Memory address \n");

    printf("of p_tmp \t  value | of  q_tmp \t value \n");

    for (nElement = 0; nElement < 5; nElement++) {

        printf("%d \t\t %2d | %d \t\t %2d\n", p_tmp, *p_tmp, q_tmp, *q_tmp);

        sum3 += *(p_tmp++) + *(q_tmp++); /**Move pointer to the next block of memory, 4 bytes of difference.**/

    }

    printf("Now the pointer is pointing to a memory address outside the array and contains garbage\n");

    printf("Memory %d value %d memory %d value %d\n", p_tmp, *p_tmp, q_tmp, *q_tmp);

    printf("Move the pointer back to the last memory address\n");

    printf("%d %d \n", *(--p_tmp), *(--q_tmp));

    printf("The sum is: %d %d %d", sum, sum2, sum3);
    
    printf("\n");
    
    return 0;

}
