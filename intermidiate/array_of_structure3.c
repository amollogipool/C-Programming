/* Array of Structures in C example */

#include <stdio.h>

struct Student
{
  char Student_Name[50];
  int C_Marks;
  int DataBase_Marks;
  int CPlus_Marks;
  int English_Marks;
};

int main()
{
  int i;
  struct Student Students[4] = 
                {
                 {"Akshay", 80, 70, 60, 70},
                 {"Vaibhav", 85, 82, 65, 68},
                 {"samadhan", 80, 70, 66, 60},
                 {"sujay", 85, 85, 65, 86},
                 };
  
  printf(".....Student Details....");
  for(i=0; i<4; i++)
  {
    printf("\n Student Name = %s", Students[i].Student_Name);
    printf("\n First Year Marks = %d", Students[i].C_Marks);
    printf("\n Second Year Marks = %d", Students[i].DataBase_Marks);
    printf("\n First Year Marks = %d", Students[i].CPlus_Marks);
    printf("\n Second Year Marks = %d", Students[i].English_Marks);
  }    
 
 return 0;
}
