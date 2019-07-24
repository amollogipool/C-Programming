#include <stdio.h>
#include <stdlib.h>
/*
Example for passing structure object by value:-
 It can be done in below 3 ways.
1.	Passing structure by value.
2.	Passing structure by address.
3.	No need to pass it, Declare structure variable as global.
*/
struct Employee
{
	int id;
	char name[30];
	float sal;
};

void display(struct Employee);
int main() {
	struct Employee emp={1,"amol",1500.00};
	display(emp);
	return 0;
}

void display(struct Employee e){
	printf("\nId is: %d",e.id);
	printf("\nName is: %s",e.name);
	printf("\nSalary is: %.2f",e.sal);
}
