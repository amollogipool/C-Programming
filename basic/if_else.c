#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main() {
	
	int a=20, b=30;
	if(b>a){
     printf("B is greater than A.");
     int x=90;
    }
     else
     {
      printf("A is greater than B.");
	 }
    
	return 0;
}
*/
     /*
int main()
     {
     	int n;
     	printf("Enter the Number.");
     	scanf("%d",&n);
     	int result=(n%2==0)?printf("l"):printf("odd");//Code Optimization.
       printf("The result is: %d",result);
	 }
	 */
	 
	 int main()
	 {
	 	int a,b,c;
	 	printf("Enter the value of a");
	 	scanf("%d",&a);
	 	printf("Enter the value of b");
	 	scanf("%d",&b);
	 	printf("Enter the value of c");
	    scanf("%d",&c);
	 	if(a>b&&a>c){
	 	  printf("largest no is %d",a);
		 }
	 	 else if(b>a&&b>c){
	 	printf("largest no is %d",a);
		 }
		 else{
		  printf("The c is largest");
		 }
	 	
	 	return 0;

}
