#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Nested Structure:
Structure in another Structure.
*/
struct Employee{
	int emp_id;
	char emp_name[30];
	float salary;
	
	struct DateOfBirth{
		int dd;
		int mm;
		int yy;
	}DOB;
};
int main() {
	struct Employee emp;
	printf("Enter id: ");
	scanf("%d",&emp.emp_id);
	printf("Enter name: ");
	scanf("%s",&emp.emp_name);
	//strcpy(emp.emp_name,emp.emp_name);
	printf("Enter Salary: ");
	scanf("%f",&emp.salary);
	printf("Enter DOB [DD MM YY] Format: ");
	scanf("%d%d%d",&emp.DOB.dd,&emp.DOB.mm,&emp.DOB.yy);
	
	printf("\nEmployee Id: %d\n",emp.emp_id);
	printf("Employee Name: %s\n",emp.emp_name);
	printf("Employee Salary: %.2f\n",emp.salary);
	printf("Date Of Birth :%02d/%02d/%02d",emp.DOB.dd,emp.DOB.mm,emp.DOB.yy);

	return 0;
}
