/*
1] Iterative statements:
A looping construct lets your program run the same code repeatedly.
looping is deciding how many times to take a certain action.
2]  for(initialize ; condition; increment) {
	}
Loops as long as condition is true after executing initialize. 
At the end of each lopp the increment is executed.
used to execute the set of instructions repeatedly,until and unless the condition is
true, whatever the statement defined inside for body are executed repeatedly.
when to use:-
If we know no. of iterations are known and If we know the initial and final condition then 
it is better to go for for loop.
3] while loop:- It is simailar to for loop.
Execute the set of instructions repeatedly as long as the condition is true.
While loops will continue to run as long as the test condition is true which may mean that the code does not run at all.  
4] do while:-
Do..While loops, are guaranteed to run the code at least once because they check the condition at the end of the construct. 
*/
#include <stdio.h>  
#include <stdlib.h>
int main() {
	
	/*int i,sum=0;
	for(i=1;i<5;i++){
		sum=sum+i; //Standard Approach
		sum+=i;  // Shorthand Approach
	}
	printf("Sum is:%d",sum);*/
	int i,n,sum=0;
	printf("Enter the value of N");
	scanf("%d",&n);
	for(i=1;i<n;i++){
	if(n%i==0){
	sum=sum+i;
    }	 
	}
	if(n==sum){
	printf("The Entered Number is Perfect");
   }else{
    printf("The Entered Number is not a Perfect");
   }
	return 0;
}
