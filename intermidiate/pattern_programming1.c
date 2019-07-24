#include <stdio.h>
#include <stdlib.h>
/*
int main() {
	int i,j;
	int space=4;
	printf("Pyramid Triangle pattern");
	printf("First Approach");
	//run loop (parent loop) till number of rows
	for(i=1;i<=5;i++)
	{
		//loop for initially space, before star printing
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		
		printf("\n");
		space--;
	}
	//repeat it again
	space=0;
	//run loop (parent loop) till number of rows
	for(i=5;i>=1;i--)
	{
		//loop for initially space, before star printing
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		space++;
	}
	return 0;
}*/
int main() 
{   
//    int i,k;
//    int number = 5;
//    int count = number - 1;
//    for(k = 1; k <= number; k++){
//          for(i=1; i <= count; i++)
//             printf(" ");
//             count--;
//          for(i=1; i <= 2 * k - 1; i++)
//             printf("*");
//             printf("\n");
//     }

     int i,j,k;
     for(i=1;i<=5;i++){
     	for(j=i;j<=5;j++){
     	   printf(" ");
		 }
		 for(k=1;k<=i;k++){
     	   printf("*");
     	   printf(" ");
		 }
		 printf("\n");
		
	 }
     return  0;
}
