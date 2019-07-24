#include <stdio.h>
#include <stdlib.h>
int main() {
     int i=0;
	while(i<3){
		printf("Outer Loop i =%d\n",i);
		while(i<3){
			printf("Inner Loop i =%d\n",i);
			i++;
	}
  }
	return 0;
}
