/*Basic structure of c program */
/* 1] Documentation Section -> 
      1.To write the info about program.
      2. Author Name and current date or time. 
*/

/* 2] Link Section -> 
      1. To include the required library :- collection of header files.
      2. To include the header files :- collection of predefined functions. 
      3. To initialize the Environment program.
      4. To link the program with header files.
      
      Example:- 1. #include<stdio.h> :- printf(), scanf() etc.
                2. #include<conio.h> :- clrscr(), getch() etc.
                3. #include<string.h> :- strlen(), strcmp(), strcpy(), strrev() etc.
                4. #include<math.h> :- pow(), rand() etc.
                5. #include<graphics.h> :- setColor(), setBackground() etc.
                6. #include<dos.h> :- getTime(), getDate() etc.
*/

/* 3] Definition Section -> 
      1.To define symbolic constant.
      Example:- #define MAX 50;
                #define PI 3.14;
*/

/* 4] Global Declaration Section -> 
      1. To declare global variable.
      2. To declare Function Prototype.
      Example:- int------------------------------------------------------------------ a;
                int age;
*/

/* 5] Main Function Section -> 
      1. Starting and Ending point of c program.
      2. TopDown program design approach.
     
      Example:- int main(){
	          
	          Local Declaration Part: Et xample - int a,b;
			   
			    These are local variable which can be accessible within same function only.
			    Memory is allocated when function is called. 
			    Memory is deallocated when function call is finish.
			    
			  Executable Part: Example - some statements to print the output on the screen.
	          
	        }
   */             

/* 6] Sub_Program Section -> 
      1.Global variable can directly accessible and updated.
      Example:- fun1(){
      int x,y;
	              we can modify the value of global variable
	                }
                    
                fun2(){
	             we can modify the value of global variable
	                }
	                
	            funn(){
	             we can modify the value of global variable
	                }
               
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("Welcome to Logipool Infotech");
	int i=10,j=10;
	int result=i==j?printf("Both are equal"):printf("Both are not equal");
	return 0;
}
