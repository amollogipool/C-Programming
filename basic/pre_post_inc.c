/*Pre/Post Increment Operator
 Post Increment-> i++ :- First assign the value to i and then increment the value of i by 1.
 Pre Increment-> ++i :- First increment the value of i by 1 and then assign the value to i.
 
 Post Decrement-> i-- :- First assign the value to i and then decrement the value of i by 1.
 Pre Decrement-> --i :- First decrement the value of i by 1 and then assign the value to i.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	
	//int i=1;
	//i=i+1; //standard approach
	//i+=1;  //shorthand approach
	
   	//i++;
	//printf("%d\n",i);
	//printf("%d\n",i++);
	//printf("%d\n",++i); 
	
/*	int a=1;
	int b;
	b=a++;
	printf("%d %d\n",a,b); 
	*/
	int i=1, temp;
	temp=i;
	i++;
	i=temp;
	printf("%d\n",i);
	return 0;
}
