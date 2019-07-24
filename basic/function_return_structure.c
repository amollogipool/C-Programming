#include <stdio.h>
#include <stdlib.h>
/* Function Returning Structure
Structure is user-defined data type, like built-in data types structure can be return from function.
Example for passing structure object by reference
*/
	struct Employee
    {
	  int id;
	  char name[25];              
	  long sal;
	};
	 
   struct Employee getEmployee();  //1st Approach.
   //struct Employee getEmployee(struct Employee);  //2st Approach.
   void putEmployee(struct Employee);

int main() {
	
	/*struct Employee Emp; //1st Approach 1.
	Emp=getEmployee();
	putEmployee(Emp);
	*/
	
	//struct Employee Emp=getEmployee(); //1st Approach 2.
	//putEmployee(Emp);
    
    
	//struct Employee Emp;
	putEmployee(getEmployee());
	
	return 0;
}

struct Employee getEmployee()
	{
    struct Employee E;
    printf("\nEnter Employee Id : ");
    scanf("%d",&E.id);
 
    printf("\nEnter Employee Name : ");
    scanf("%s",&E.name);
	 
    printf("\nEnter Employee Salary : ");
	scanf("%ld",&E.sal);
	
	return E;             //Statement   2
}

void putEmployee(struct Employee e){
	
	printf("\n\nEmployee Id : %d",e.id);
    printf("\nEmployee Name : %s",e.name);
	printf("\nEmployee Salary : %ld",e.sal);
}


