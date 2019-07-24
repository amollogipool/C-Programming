/* 
1] String: Collections of characters,digits,and symbols enclosed within 
 double quotation marks is called string.
 Strings are arrays of characters.
 Every String in a C program is ends with '\0' character.
 
 If the program uses the string functions, it must define the header file string.h.

2] Syntax:-
char word[]={‘W’,’E’,’L’,’C’,’O’,’M’,’E’,'\0'};
 
char word[7] = “Welcome”;
	/*In this declaration NULL character (\0) will automatically be inserted at the end of the string.
    '\0' represents the end of the string.
	It is also referred as String terminator & Null Character.
 */
 
 //char word[]=“Logipool”; // '\0'-> Appended automatically at the end of string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {	
    //char company_Name[8]={'L','o','g','i','p','o','o','l','\0'}; //size=9.
    char str1[]="Logipool"; //'\0'-> Appended automatically at the end of string.
    char str2[]="Infotech";
    char str3[]="Infotech";
	printf("The string is:%s\n",str1);
    int i,length;
    for(i=0;i<str1[i]!='\0';i++){
    	length++;
	}
	printf("The length of string without pre_defined function is:%d\n",length);
    //Syntax: size_t strlen(const char *str1) --> Exclude '\0' character.
	printf("The length of string with pre_defined function is:%d\n",strlen(str1));
    
	//Syntax: int strcmp(const char *str1,const char *str2)
    //strcmp():- compare two strings & return integer value(0),If both equal in terms of contents.
    // == :- compare two strings & return integer value(0),If both equal in terms of contents
    if(strcmp(str2,str3)==0){  // contents comparision.
    	printf("Both are equal\n");
	}else{
		printf("Both are not equal\n");
	}
    
    //Syntax: char *strcat(char *str1,char *str2):-Concatenates 1st string with 2nd &
    // returns the concatenated string.
    printf("The Concatenated string is:%s\n",strcat(str1,str2));
    
    //Syntax: char *strcpy(char *str1,char *str2):-Copies 2nd string into 1st,
	//including'\0'
	
	printf("The str2 is copied into str1:%s\n",strcpy(str1,str2)); 
	// Replace previous string with current string.
	
	printf("The Reverse of str1 is:%s\n",strrev(str1)); 
	// Reverse the given string.

	return 0;
}
