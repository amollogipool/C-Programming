#include <stdio.h>
#include <stdlib.h>
/*WAP to print a string using pointer*
NULL Pointer :
Literal meaning of NULL pointer is a pointer which is pointing to nothing. 
NULL pointer points the base address of segment.
Examples of NULL pointer:
1.	 
2.	int *ptr=(char *)0;
3.	float *ptr=(float *)0;
4.	char *ptr=(char *)0;
5.	double *ptr=(double *)0;
6.	char *ptr='\0'
7.	int *ptr=NULL;
*/

int main() {
	char str[52];
	char *ptr;
	gets(str);
	ptr=str;
	printf("The Entered string is:%");
	while(*ptr!='\0')
	printf("%c",*ptr++);
	return 0;
}
