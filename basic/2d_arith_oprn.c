/*
#include <stdlib.h>
int rows,cols; 
int main()
{   
    int i,j;
    printf("Enter the size of rows:");
    scanf("%d",&rows);
    printf("Enter the size of cols:");
    scanf("%d",&cols);
    int arr[rows][cols];
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            arr[i][j]=arr[i][j]+arr[i][j];
        }
    }
 
    printf("\nEntered 2-D array is: \n\n");
 
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%3d ", arr[i][j] );
        }
        printf("\n");
    }
    return 0;
}
*/
   /*  int main()
     {
     	int i,a[5]={1,4,7,3,6},s;
     	s=a[0];
     	for(i=0;i<5;i++)
     	{
		 if(a[i]<s)
     	{
		 a[i]=s;
		 }
		 else
		 {
		 }
		 }
		 printf("%d",s);
		 return 0;
		 	 }*/	 
#include<stdio.h>
/*
int main()
{
	char operator;
	double firstno,secondno;
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&operator);
	printf("enter two operands:");
	scanf("%lf %lf",&firstno,&secondno);
	switch (operator)
	{
		case'+':
			printf("%.1lf+%.1lf=%.1lf",firstno,secondno,firstno+secondno);
			break;
		case'-':
		    printf("%.1lf-%.1lf=%.1lf",firstno,secondno,firstno-secondno);
			break;	
		case'*':
		    printf("%.1lf*%.1lf=%.1lf",firstno,secondno,firstno*secondno);
			break;
	    case'/':
		    printf("%.1lf/%.1lf=%.1lf",firstno,secondno,firstno/secondno);
			break;	
		default:
		    printf("error! operator is not correct");
		}
		return 0;
	}
	*/
    int main()
    {
    	int m;
    	printf("\n enter the marks of students");
    	scanf("%d",&m);
    	if(m>=70){
    		printf("\n\n your grade:A");
		}else if(m>=60){
			printf("\n\n your grade:B");
		}else if(m>=50){
			printf("\n\n your grade:C");	
		}else{
			printf("\n\n you are fail");
		}	
    	return 0;
	}
