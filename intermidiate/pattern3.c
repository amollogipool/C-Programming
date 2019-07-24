#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int i,j,k;
    int number = 5;
    int count = number-1;
    for (k = 1; k <=number; k++) {
        for (i = 1; i <=count; i++)
            printf(" ");
            count--;
        for (i=1; i <=2*k-1;i++)
            printf("*");
            printf("\n");
    }
    count = 1;
    for (k = 1; k <= number - 1; k++) {
        for (i = 1; i <= count; i++)
            printf(" ");
            count++;
        for (i = 1; i <=2*(number-k)-1;i++)
            printf("*");
            printf("\n");
    }
    return 0;
} 
