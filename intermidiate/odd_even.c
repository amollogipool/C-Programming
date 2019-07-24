#include <stdio.h>
#include <stdlib.h>
/*
*/
int main() {
	
		int i,even=0,odd=0;
		for(i=1;i<=10;i++)
		{
			if(i%2==0)
			{
			even+=i;
			printf("\neven %d",even);
			}
			else
			{
			odd+=i;
			printf("\nodd %d",odd);
			}
        }
		printf("\neven %d",even);
		printf("\nodd %d",odd);
		return 0;
}
	


     /*     int main()	
	    {
	    	int i,sum=0;
	    	for(i=1;i<=10;i++)
	    	{
	    		sum+=i;
			}
			printf("%d",sum);
			return 0;
		}
	*/

