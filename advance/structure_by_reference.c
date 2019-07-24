#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Passing Structure by Reference
In this approach, the reference/address structure object is passed as function argument to the definition of function.
Example for passing structure object by reference
*/
struct Employee
{
	int id;
	char name[30];
	float sal;
};

void display(struct Employee*);
int main() {
	struct Employee emp={1,"amol",1500.00};
    printf("Before display:");
	printf("\nId is: %d",emp.id);
	printf("\nName is: %s",emp.name);
	printf("\nSalary is: %.2f",emp.sal);
	display(&emp);
	printf("\nAfter display:");
	printf("\nId is: %d",emp.id);
	printf("\nName is: %s",emp.name);
	printf("\nSalary is: %.2f",emp.sal);
	return 0;
}

void display(struct Employee *e){
	//printf("\nId is: %d",e->id);
	//printf("\nName is: %s",e->name);
	//printf("\nSalary is: %.2f",e->sal);
	e->id=2;
	//e->name="Soham";//[Error] assignment to expression with array type.
	strcpy(e->name,"Soham Kardule");
	e->sal=2000;
}
