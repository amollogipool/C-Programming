/*
1] Operators:
 ->Operators are the symbols which tell the computer to execute certain mathematical or logical operations. 
 A mathematical or logical expression is generally formed with the help of an operator.

2] Expressions:
Arithmetic expression in C is a combination of variables, constants and operators written in proper syntax. C can easily handle any complex mathematical expressions but these mathematical expressions have to be written in proper syntax.

3] Types of Operators:
  1] Arithmetic operators
  2] Relational operators
  3] Assignment operators
  4] Increment and Decrement operators
  5] Conditional operators
  6] Logical operators
  7] Bitwise operators
  8] Special operators
*/
//addition 
#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
    int a,b,c;
	printf("enter the values of a and b");
	scanf("%d %d", &a, &b);
	c=a+b;
	printf("the sum is: %d",c);
}
*/

//Arithmetic operators
/*
int main() {
	int a,b,c,d,e,f;
	printf("enter the values of a and b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("the sum of %d and %d is: %d\n",a,b,c);
	d=a-b;
	printf("the substraction of %d and %d is: %d\n" ,a,b,d);
	e=a*b;
	printf("the multiplication of %d and %d is: %d\n",a,b,e);
	f=a/b;
	printf("the division of %d and %d is: %d\n",a,b,f);
}
*/
//WAP to print a message
/*
int main()
{
	printf("\n welcome");
}
*/

//short hand operator
/*
int main()
{
	int a=6;
	a+=4;
	printf("the value of a: %d",a);
}
*/

//Relational operator
/*
int main()
{
	int a=10,b=5;
	int result=a>b;
	printf("%d",result);
	return 0;
}
*/
/*
int main()
{
	int a=5,b=3;
	int result=a==b;
	printf("the value of result is:%d",result);
	
}
*/

//logical operator
/*
int main()
{
	int a=5,b=3;
	int result=a<b||b>a;
	printf("the result is:%d",result);
}
*/

//bitwise operator
/*
int main()
{
	int a=25,b=15;
	int result=a&b;
	printf("the result is:%d",result);
	
}
*/
//increment and decrement operator
/*
int main()
{
	int a=1,b;
	b=++a;
	printf("%d",b);
	
}
*/

	// Arithmetic Operator:
/*	int a,b,c;
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
	c = a+b; 
	printf("The Addition of %d and %d is: %d\n",a,b,c);
	c = a-b;
	printf("The Substraction of %d and %d is: %d\n",a,b,c);
	c = a*b;
	printf("The Multiplication of %d and %d is: %d\n",a,b,c);
	c = a/b;
	printf("The Division of %d and %d is: %d\n",a,b,c);
	c = a%b;
	printf("The Modulus of %d and %d is: %d\n",a,b,c);
	*/
	// Shorthand Operator:
	
    //int i=6;
	//i=i+4; //Added i itself by 4.
	//printf("The value of i:%d\n",i);
	//Add i by itself by 4.
	//i+=4; // Instead of specifying I once again,we can use shorthand operator.
	//printf("The value of i:%d",i);
	
	
	// Relational operators:
	
	//int result;
	//result = 5!=3;// In c, True is treated as 1 and False is treated as 0;
	//printf("The value of result is: %d",result);

	
	// Pre/Post operators:

	//++i Pre-Increment :First Increment by 1 & then Assign.
    //i++ Post-Increment :First Assign & then Increment by 1.
    //--i Pre-Decrement :First Decrement by 1 & then Assign.
    //i-- Post-Decrement :First Assign & then Decrement by 1.
	
	//int i=1,j=1;
	//++i;
	//j--;
    //printf("The value is:%d and %d\n",i,j);
    //	printf("The value is %d and %d\n",i++,--j);
	//printf("The value is %d and %d\n",++i,--j);
	
   //int a=1,b;
	//b=a++;
	//printf("The value is %d and %d\n",b,a);
	
	//b=++a;
	//printf("The value is %d and %d\n",b,a);
	
	//int y=1,x=1,temp;
	//x=y++;
	//printf("The value is:%d %d\n",x,y);//---1 2
    //=x; //--1
    //x++;
    //x=temp;
	//printf("The value is:%d %d\n",x ,y);	
	

	//Conditional operator:
	//int result = 5>3?5:3;
	//printf("The Result is:%d",result);
	
	//Logical Operator:[AND,OR]
     
	 //int i=5,j=3;
	 //int result=i>j&&j<i;
	// printf("The result is:%d",result);
	 
	 
	 /*
	 int i=5,j=3
	 int result =i>j||i<j;
	 printf("The result is:%d",result);
	 */
	 
	 // Bitwise Operator:
	 /*
	 int a=25,b=15;
	 int result = a & b;
	 printf("The result is:%d",result);
	 */
	  /*
	 int a=25,b=15;
	 int result = a | b;
	 printf("The result is:%d",result);
	 */
	 //int j=1;
	 //printf("%d",++j);
	 
	 //int x,y;
	 //for(x=0,y=100;x<y-x;x++,y--){
	 //	printf("The value of x is:%d and y is:%d\n",x,y);
//	 }
	//return 0;
//}
