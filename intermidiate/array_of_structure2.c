#include <stdio.h>
#include <string.h>
#define MAX 3
struct Student 
{
     int roll_no;
     char name[30];
     float marks;
};
struct Student student[MAX];
void getStudent(struct Student[MAX]);
void putStudent(struct Student[MAX]);

int main() 
{
     getStudent(student);
     putStudent(student);
     return 0;
}
void getStudent(struct Student s[MAX]){
	int i;
	for(i=0;i<MAX;i++){
		
	    printf("\nEnter details of student %d\n\n", i+1);
		printf("Enter roll no: ");
        scanf("%d", &s[i].roll_no);
        
        printf("\nEnter name: ");
        scanf("%s", &s[i].name);
 
        printf("\nEnter marks: ");
        scanf("%f", &s[i].marks);
	}
}
void putStudent(struct Student s[MAX]){
	int i;
	 for(i=0; i<MAX; i++)
     {
         printf(" Records of STUDENT : %d \n", i+1);
         printf(" Id is: %d \n", s[i].roll_no);
         printf(" Name is: %s \n", s[i].name);
         printf(" Marks is: %f\n\n",s[i].marks);
     }
}

