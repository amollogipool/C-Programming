/*struct
{
	int i;
	double b;
	float f;
}s;
int main()
{
    printf("%d\t%d\t%d\t%d", sizeof(s.i), sizeof(s.b), sizeof(s.f), sizeof(s));
    return 0;
}*/

/*int main(){
	struct emp
	{   
	    char name[30];
		int age;
		float sal;
	};
	
	struct emp e={"Logipool"};
	printf("\n%s , %d",e.name,sizeof(e.sal));
	return 0;
}*/
/*int main()
{
    struct std
    {
        char name[30];
        int age;
    };
    struct std s1={"Mike",26};
    struct std s2=s1;

    printf("Name: %s, Age: %d\n",s2.name,s2.age);
   return 0;
}*/
/*
#include<stdio.h>
   struct course
   {
       int courseno;
       char coursename[25];
   };
int main()
{
struct course c[] = {
		             {102,"Java"},
		             {103,"PHP"},
                     {104,".DotNet"}
                    };
printf("%d",c[1].courseno);
printf(" %s\n",(*(c+1)).coursename);
    return 0;
}*/

/*#include <stdio.h>
struct employee{
    int empId;
    char *name;
    int age;
};
int main()
{
    struct employee emp []={ {1,"Mike",24}, {2,"AAA",24}, {3,"BBB",25}, {4,"CCC",30} };
 
    printf("Id : %d, Age : %d, Name : %s", emp[2].empId,3[emp].age,(*(emp+1)).name);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    typedef struct tag{
        char str[10];
        int a;
    }har;
 
    har h1,h2={"IHelp",10};
    h1=h2;
    h1.str[1]='h';
    printf("%s,%d",h1.str,h1.a);
    return 0;
}*/

/*#include<stdio.h>
struct
{
	int i;
	double b;
	float f;
}s;
int main()
{
    printf("%d\t%d\t%d\t%d", sizeof(s.i), sizeof(s.b), sizeof(s.f), sizeof(s));
    return 0;
}*/

/*
struct temp
   {
        int a;
        int b;
        int c;
    } p[] = {0};
   int main()
    {          
	printf("%d", sizeof(p));
	return 0;
}
*/

/*#include <stdio.h>
int main()
{
    struct sample{
        int x;
        float y;
        char text[20];
    }z;
 
    printf("%d %d",sizeof(z),sizeof(z.y));
    return 0;
}*/
/*#include <stdio.h>
struct Employee{
    int emp_Id;
    char emp_Name[30];
    };
int main()
{
   struct Employee Emp={101,"Soham"};
   int salary[2][3]={{15000,25000,35000},{45000,55000,65000}};
   printf("%d %s ",Emp.emp_Id,Emp.emp_Name);
   printf("%d",*(*(salary+1)+1));
    return 0;
}*/

/*#include <stdio.h>
struct Employee{
    int emp_Id;
    char emp_Name[30];
    };
int main()
{
   struct Employee Emp={102,"Abhijeet"};
   int salary[2][3]={{15000,25000,35000},{45000,55000,65000}};
   printf("%d %s ",Emp.emp_Id,Emp.emp_Name);
   printf("%d",**(salary+1));
    return 0;
    102 Abhijeet 45000
}*/
/*#include<stdio.h>
   int main()
    {          
    int a=5;
    int *p;
    p=&a;
	printf("%d %d %d",&a,*p,p);
	return 0;
}
*/
#include<stdio.h>
struct
{
	int i;
	double b;
	float f;
}s;
int main()
{
    printf("%d\t%d\t%d\t%d", sizeof(s.i), sizeof(s.b), sizeof(s.f), sizeof(s));
    return 0;
};












