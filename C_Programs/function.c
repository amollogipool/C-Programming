/* 
1] What is function:-
It is a core of POP.
It is used to execute the set of instructions together to perform a specific task.
It may be libray function or user defined function

2] Why Functions are used?
   1. Code Reusability.
   2. Code Optimization.
   3. Saves time
   4. Team work will easy. Like one person is developing one function while second will other one.

3] Function has four parts:-
	The return type: it can be void or something else (int, float, double etc)
	The function name (it can be anything but cannot begin with a number)
	The function arguments (they are optional, but if present they must be strictly typed)
	The function body (the actual code of the function)

4] Syntax:-
   1. return_type function_name(arg1,arg2,....,argn)
   2. {
   3.	//Body of the Function
   4.	// Return statement if return type is not void.
   5. }
   
5] Function has three aspects:-

1)Function declaration:- It tells the compiler about the function name,its return type and the parameters if passed to the function. Syntax:-

 Example:- int calculateSum (int a, int b);

2)Function call - This calls the actual function. Any function is called from main() 

Syntax : A . Function call statement when a function return any value .
variable name = function name ( arg1 , arg2 ) ;
Example:- total=calculateSum(3,5);

Syntax : B . Function call statement when a function do not return any value .
function name ( argument 1 , argument 2 ) ;
Example:- calculateSum(3,5);

3)Function definition - This contains all the statements to be executed.it is basically the body of function defining what the function would do.Syntax:
Syntax:- return_type function_name(parm1,param2){
      local variable declaration
      Statements
      Return Statement
}

Example:- int calculateSum(int x,int y){
int sum=0;
sum=x+y;
return sum;
}


6] Types of Function :- 
Based on return_type and arguments, functions are of four types,
	1.Function with no argument and no return value
	    Example:- void abc(void);
	
	2.Function with no argument but return value
		Example:- int abc(void);
		
	3.Function with argument but no return value
		Example:- void abc(int);
		
	4.Function with argument and return value
		Example:- int abc(int);

*/

#include <stdio.h>
#include <stdlib.h>
int calculateSum (int a, int b); // function declaration or function prototype
int calculateSub (int a, int b); // function declaration or function prototype
int calculateMul (int a, int b); // function declaration or function prototype
int calculateDiv (int a, int b); // function declaration or function prototype
int calculateMod (int a, int b); // function declaration or function prototype

int main() {
	
  int n1,n2,sum,sub,mul,div,mod; // local variables
	printf("Enters two numbers: "); // The Messege to user
	scanf("%d %d",&n1,&n2);  // To get the two value for n1 and n2 from user
	
	sum=calculateSum(n1, n2); // function call
	printf("sum is = %d\n",sum);
	
	sub=calculateSub(n1, n2); // function call
	printf("sub is = %d\n",sub);
	
	mul=calculateMul(n1, n2); // function call
	printf("mul is = %d\n",mul);
	
	div=calculateDiv(n1, n2); // function call
	printf("div is = %d\n",div);
	
	mod=calculateMod(n1, n2); // function call 
	printf("mod is = %d\n",mod);

	return 0;
}

	int calculateSum(int a,int b){ // function definition:- when function will be called code inside this function will execute.
        int result;     // local variable
	    result = a+b;   // statement
	    return result;  // return statement
	}
	
	int calculateSub(int a,int b){
		int result;     
	    result = a-b;
        return result;  
	}
	
	int calculateMul(int a,int b){
		int result;     
	    result = a*b;   
	    return result;  
	}
	
	int calculateDiv(int a,int b){
		int result;     
	    result = a/b;   
	    return result;  
	}
	
	int calculateMod(int a,int b){
		int result;     
	    result = a%b;   
	    return result;  
	}


