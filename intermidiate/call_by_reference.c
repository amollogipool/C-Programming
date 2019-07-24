/* run this program using the console pauser or add your own getch, system("pause") or input lo
*/
void swap(int a,int b);
#include<stdio.h>
int main()
{
	int a=50,b=20;
	printf("before swap :%d %d",a,b);
	swap(a,b);
	printf("after calling %d %d",a,b);
	return 0;
}
void swap(int X,int Y)
{
	int temp;
	temp=X;
	X=Y;
	Y=temp;
	
}
