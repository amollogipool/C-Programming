#include<stdio.h>
#include<string.h>
#define MAX 2
struct Student
{
    int roll_no;
    char name[20];
    float marks;
};
struct Student getStudent(void);
void putStudent(struct Student);
struct Student student[MAX]; //Gloabal Array Declaration.

int main()
{
	putStudent(getStudent());
    return 0; 
}

struct Student getStudent(void){
	int i;
	for(i=0;i<MAX;i++){
		
	    printf("\nEnter details of student %d\n\n", i+1);
		printf("Enter roll no: ");
        scanf("%d", &student[i].roll_no);
        
        printf("\nEnter name: ");
        scanf("%s", &student[i].name);
 
        printf("\nEnter marks: ");
        scanf("%f", &student[i].marks);
	}
	return student[i];
}
void putStudent(struct Student s){
	int i;
    printf("\nRoll no\tName\tMarks\n");
    for(i = 0; i < MAX; i++ )
    {
        printf("%d\t%s\t%.2f\n",
        student[i].roll_no,student[i].name,student[i].marks);
    }

};
