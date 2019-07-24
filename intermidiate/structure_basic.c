#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* In C language structure is user define data type.
A structure creates a data types that are used to different elements into a single type structure.*/
struct Employee{
	int emp_id;
	char emp_name[20];
	int salary;
};
//struct Employee emp;//Global Structure Declaration
//void getvalue(void);
int main() {
	struct Employee emp;//creating structure variable.
//	emp.emp_id=1;//outside main function is not accessible.
	//getvalue();
	//1st Approach for Initialization.
	emp.emp_id=1;  // Initializing structure members.
	strcpy(emp.emp_name,"Amol"); // copying string into char array
	emp.salary=20000;
	
	
	//2nd Approach for Initialization
	//struct Employee emp={1,"Akshay",20000};
	
	printf("\nEmployee id is:%d",emp.emp_id);
	printf("\nEmployee name is:%s",emp.emp_name);
	printf("\nEmployee salary is:%d",emp.salary);
	
    /*Read Employee Details
    printf("\nEntered Employee Details:\n");
    printf("\nEmployee ID ?:");
    scanf("%d",&emp.emp_id);
    printf("Employee Name ?:");
    scanf("%s",&emp.emp_name);
    //gets(emp.emp_name);
    printf("Employee Salary ?:");
    scanf("%d",&emp.salary);
    */
    
    /*Print Employee Details
    printf("\nEnter Employee Details is:");
    printf("\nEmployee ID:%d",emp.emp_id);
    printf("\nEmployee Name:%s",emp.emp_name);
    printf("\nEmployee Salary:%d",emp.salary);
    */
	return 0;
}
/*void getvalue(void){
	printf("The value of a is :%d",emp.emp_id);
}*/
