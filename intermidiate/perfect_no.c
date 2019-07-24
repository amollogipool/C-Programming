#include <stdio.h>
#include <stdlib.h>
/*C Program to find the Perfect Number*/
int main() {
	int n,i,sum=0;
	printf("Enter the any value");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%n==0){
			sum=sum+i;
		}
	}
	
	if(sum==n)
		printf("The Given number is perfect");
		else
		printf("The Given number is not perfect");
	return 0;
}
