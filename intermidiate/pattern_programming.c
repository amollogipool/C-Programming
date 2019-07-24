#include <stdio.h>
#include <stdlib.h>
/* 
Let us take an explanation, 
when i=1, 1<5 hence it will enter into the loop, where j=0 ,
0<1 hence it will enter the loop and print *, 
the j will be incremented amd j will become 1, 
then the condition will become false because 1 is not < 1, 
hence next line will be executed that it printf(“\n”); 
it will go to next line.
*/
int main(){
	int i,j;
	
	printf("Square pattern\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){	
		printf("*");	
		}
		printf("\n"); 
	}
	
	printf("Right Triangle pattern\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){	
		printf("*");	
		}
		printf("\n"); 
	}
	
	printf("Right Triangle pattern\n");
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){	
		printf("*");	
		}
		printf("\n"); 
	}
	
	printf("Pyramid Triangle pattern\n");
	 int space=4;
    /*run loop (parent loop) till number of rows*/
    for(i=1;i<=5;i++)
    {
	    /*loop for initially space, before star printing*/
	    for(j=1;j<=space;j++)
	    {
		    printf(" ");
	    }
	    for(j=1;j<=i;j++)
	    {
		    printf("* ");
	    }
		
	    printf("\n");
	    space--;	/* decrement one space after one row*/
    }
	return 0;
}
