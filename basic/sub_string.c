#include <stdio.h>
#include <string.h>
//function declaration 
int getSubStr(char * string, char * subString);
int main()
{
	char string[100]={0};
	char subString[10]={0};
	
	printf("Enter complete string: ");
	scanf("%[^\n]s",string);
	getchar();	
	printf("Enter string to check: ");
	scanf("%[^\n]s",subString);	
	
	if(getSubStr(string,subString))
		printf("String \"%s\" found in \"%s\"\n",subString,string);
	else
		printf("String \"%s\" not found in \"%s\"\n",subString,string);
		
	return 0;
}

//function definition
int getSubStr(char * string, char * subString)
{
	int flag = 0;
	int i=0,len1=0,len2=0;
	
	len1 = strlen(string);
	len2 = strlen(subString);
	
	while(string[i] != '\0')
	{
			if(string[i] == subString[0])
			{
					if((i+len2)>len1)
						break;
					if(strncmp(string+i,subString,len2)==0)
					{
						flag = 1;
						break;
					}
			}
			i++; 
	}
	
	return flag;
}
