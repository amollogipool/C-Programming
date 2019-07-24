#include <stdio.h>
#include <stdlib.h>
/**/
int main() {
	int i,j,dublicate=0;
	int arr[7]={5,5,2,3,8,4,6};
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]==arr[j]){
				dublicate++;
			}
		}
	}
	printf("Dublicate count is:%d",dublicate);
	return 0;
}
