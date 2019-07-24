/*
1] What is string:-
In C language a sequence of characters, digits, and symbols enclosed within double quotation marks is called string.
In C, strings are arrays of characters.
Every string in a c program is ends with '\0' character.
Strings are always enclosed within double quotes.
If the program uses the string functions, it must define the header file string.h.

2] Syntax:-
char word[]={‘W’,’E’,’L’,’C’,’O’,’M’,’E’,'\0'};
 
char word[7] = “Welcome”; 
	/*In this declaration NULL character (\0) will automatically be inserted at the end of the string.
    '\0' represents the end of the string.
	It is also referred as String terminator & Null Character
	
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void printString (char str[]);
int getStringLength (char str[]);
void reverse (char str[]);
void palindrome (char str[]);
void getVowelsCount (char str[]);

int length;
int main() {
 
	//char word[7] = “Welcome”;
	//printf("%s",word);
	
    /*char companyName[] = {'L', 'O', 'G', 'I', 'P','O','O','L',' ','I','N','F','O','T','E','C','H','!'};
    printf("%s",companyName);
    */
    
    /*
     char companyName[ ] = “WelcomeToLogipoolInfotech”; //This will automatically generate an array of required size as per the length of the string
     printf("%c",companyName[0]);
     printf("%c",companyName[1]);
     printf("%d",companyName[1]);
     printf("%c",companyName);
	 printf("%s",companyName);
    */
   
    char anyString[SIZE];
    printf("Enter any String: ");
    scanf("%s",&anyString);
    printString(anyString); /*passing the String as an Argument*/
    length=getStringLength(anyString);
    printf("The Lenght of Entered String is: %d\n",length);
    reverse(anyString);
    palindrome(anyString);
    getVowelsCount(anyString);
    
	return 0;
}

void printString(char str[])
{
    printf("The Entered String is: %s\n",str);
}

int getStringLength(char str[])
{
    int i,stringLength=0;
    for(i=0;str[i]!='\0';i++){
      stringLength++;
	}
	return stringLength;
}

void reverse(char str[])
{
    int i,j=0;
    char str2[SIZE]={0};
    for(i=length-1;i>=0;i--){
      str2[j]=str[i];
      j++;
	}
	str2[j]='\0';
	printf("The reverse of the given string is: %s\n",str2);
}

void palindrome(char str[])
{
    int i,j=0;
    char str2[SIZE]={0};
    for(i=length;i>=0;i--){
      str2[j]=str[i];
      j++;
	}
	str2[j]='\0';

	if(str[j]!=str2[i]){
		printf("The given string is not Palindrome\n");
	}else{
		printf("The given string is Palindrome\n");
	}
}
void getVowelsCount(char str[])
{
    int i,count=0;
	for(i=0;str[i]!='\0';i++) { 
	if(str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
	 count++; 
	 } 
	}
    if(count==0) {
	printf("No vowels are there \n"); 
	} else {
	printf("Number of vowels in %s is %d\n",str,count); 
	}
}




