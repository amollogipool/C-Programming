#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	c=a+b;
	printf("The Addition of %d and %d is = %d\n",a,b,c);
	c=a-b;
	printf("The Substraction of %d and %d is = %d\n",a,b,c);
	c=a*b;
	printf("The Multiplication of %d and %d is = %d\n",a,b,c);
	c=a/b;
	printf("The Division of %d and %d is = %d\n",a,b,c);
	c=a%b;
	printf("The Modulus/Remainder of %d and %d is = %d\n",a,b,c);
	return 0;
}
