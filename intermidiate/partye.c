#include <stdio.h>
#include <stdlib.h>
#define MAX 50 //maximum items entry
struct ItemDetails{	
	char itemName[30];	//item name
	int quantity;	//item quantity
	float price;	//per item price
	float totalAmount; //total amount = quantity*price
};
struct ItemDetails item[MAX];
void getItemDetails(struct ItemDetails[MAX]);//Function PrototypE/Function Declartion.
void putItemDetails(struct ItemDetails[MAX]);
float expenses=0.0f;
float finalExpenses=0.0f;
int count=0;
int main() {
	return 0;
}
void getItemDetails(struct ItemDetails item[MAX]){
	int i,choice;
	do
	{
		printf("Item Details");
		printf("Item Name: ");
		scanf("%s",&item[i].itemName);
		printf("Item Quantity");
		scanf("%d",&item[i].quantity);
		printf("Item Price:");
		scanf("%f",&item[i].price);
		
		i++; // Increase the Loop Counter.
		count++; // Increase the Record Counter.
		
		item[i].totalAmount=(float)item[i].quantity*item[i].price;
		expenses+=item[i].totalAmount;
		
		printf("\n You want to more items:(Press 1)");
		scanf("%d",&choice);
		
	}while(choice==1);
	
}
void putItemDetails(struct ItemDetails item[MAX]){
	int i,friends,choice;
	for(i=0;i<count;i++){
		printf("\n ItemName\tItemQuantity\tItemPrice");
		printf("%s\t%d\t%.2f\t%.2f",item[i].itemName,item[i].quantity,item[i].price,item[i].totalAmount);
	}
    printf("\nWant to divide in friends (press 1 for yes): ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\nHow many friends? ");
		scanf("%d",&friends);
		finalExpenses=expenses/friends;
		//printf("\nEach friend will have to pay: %.2f\n",(expenses/(float)friends));
		printf("\nEach friend will have to pay: %.2f\n",finalExpenses);
	}
	printf("\n~Thanks for using me... Enjoy your party!!!~\n");
}
