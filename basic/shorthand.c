#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=9;
	i=i+3; //we want to add i itself by 3, so Now initial value of i is 9 so by adding it will becomes 10.
	printf("The value of i is = %d\n",i); // we get the value of i is 12.
	// Instead of specifying i once again, we can use the shorthand operator.
	
	i+=3; // we need to add i by itself by 3;
	printf("The Add value of i is = %d\n",i); // we get the value of i is 12.
	
	i-=3; // we need to sub i by itself by 3;
	printf("The Sub value of i is = %d\n",i); // we get the value of i is 6.
	
	i*=3; // we need to mul i by itself by 3;
	printf("The Mul value of i is = %d\n",i); // we get the value of i is 36.
	
	i/=3; // we need to div i by itself by 3;
	printf("The Div value of i is = %d\n",i); // we get the value of i is 3.
	
	i%=3; // we need to mod i by itself by 3;
	printf("The Mod value of i is = %d\n",i); // we get the value of i is 0.
	return 0;
}
