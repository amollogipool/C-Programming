/* Relational Operator */
#include <stdio.h>
#include <stdlib.h>
int main() {
	int mark;
	printf("Enter the Mark: ");
	scanf("%d",&mark);
	if(mark==100){
	printf("Superb One Keep It Up");
	}
	else if(mark>=60){
	printf("First Class");	
	}
	else if(mark>=35){
	printf("Second Class");	
	}
	else if(mark<35){
	printf("Fail");	
	}
	return 0;
}
