/*Bitwise Operator
Bitwise AND : &
Bitwise OR  : |

AND Table
T T T
T F F
F T F
F F F

OR Table
T T T
T F F
F T F
F F F
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=25,j=15;
	
	//Logical AND Operator
	
	  int result= i>j && j<i;
	  printf("The result is %d",result);
	//int result= i<j && j<i;
	//printf("The result is %d",result);
	
	//Logical OR Operator
	 //int result= i>j || j>i;
	 //printf("The result is %d",result);
	 
	 //int result= i>j || j>i;
	 //printf("The result is %d",result);
	
	return 0;
}
