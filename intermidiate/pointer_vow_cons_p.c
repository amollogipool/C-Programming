#include <st dio.h>
#include <stdlib.h>
/*C program to count vowels and consonants in a string using pointer.*/
int main()
{
    char str[100];
    char *ptr;
    int  cntV,cntC;
     
    printf("Enter a string: ");
    gets(str);
     
    //assign address of str to ptr
    ptr=str;
     
    cntV=cntC=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            cntV++;
        else
            cntC++;
        //increase the pointer, to point next character
        ptr++;
    }
     
    printf("Total number of VOWELS: %d, CONSONANT: %d\n",cntV,cntC);        
    return 0;
}
