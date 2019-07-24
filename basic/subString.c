#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*C Program to find substring in a given string*/
int indexofSubstring(char str[],char s[]);
int main() {
	int index;
	index=indexofSubstring("how are you","you");
	if(index==-1)
	printf("Substring not found\n");
	else
	printf("Substring found at index %d\n",index);
	return 0;
}

int indexofSubstring(char str[],char s[]){
int i,j,k,l;
 l=strlen(s);
 for(i=0;str[i+l-1];i++){
 	k=i;
 	for(j=0;j<=l-1;j++){
 	   if(str[k]!=s[j])
 		  break;
 	    k++;
	 }
	if(j==l)
	 return(i);
 }
 return (-1);
}
