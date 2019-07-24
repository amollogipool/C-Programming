/*Passing Structure as a argument to the function.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2
struct Employee{
	int id;
	char name[30];
	float salary;
}emp[MAX];


void read(struct Employee[MAX]);
void print(struct Employee[MAX]);

//struct Employee emp[2];
int count=0;
int main() {
	read(emp);
	print(emp);
	return 0;
}
void read(struct Employee e[MAX]){
	int i=0,choice;
	/*for(i=0;i<MAX;i++){
	printf("\nEnter %d Employee Details:\n",i+1);
	printf("Enter id:");
	scanf("%d",&e[i].id);
	printf("Enter name:");
	scanf("%s",&e[i].name);
    printf("Enter salary:");
    scanf("%f",&e[i].salary);
	}*/
	
	do{
	printf("\nEnter %d Employee Details:\n",i+1);
	printf("Enter id:");
	scanf("%d",&e[i].id);
	printf("Enter name:");
	scanf("%s",&e[i].name);
    printf("Enter salary:");
    scanf("%f",&e[i].salary);
    i++; //loop counter.
    count++;//Record counter.
    printf("want to add more employee(press 1)");
    scanf("%d",&choice);
	}while(choice==1);
}
void print(struct Employee emp[MAX]){
	int i;
	for(i=0;i<count;i++){
	printf("\n%d Employee Details:\n",i+1);
	printf("\nEmployee id:%d\n",emp[i].id);
	printf("Employee name:%s\n",emp[i].name);
	printf("Employee salary:%.02f\n",emp[i].salary);
	}
}
