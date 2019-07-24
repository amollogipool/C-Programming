   /*Passing Structure as a argument to the function.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50 //maximum items entry
struct ItemDetails{	
	char itemName[30];	//item name
	int quantity;	//item quantity
	float price;	//per item price
	float totalAmount; //total amount = quantity*price
};

struct ItemDetails item[MAX];
void getItemDetails(struct ItemDetails[MAX]);
void putItemDetails(struct ItemDetails[MAX]);
int count=0;
float expenses=0.0f;

int main() {
	getItemDetails(item);
	putItemDetails(item);
	return 0;
}

void getItemDetails(struct ItemDetails item[MAX]){
	int i=0,choice;
	//infinite loop 
	do{
			
		printf("Enter item details [%2d]:\n",i+1);
		printf("Enter Item Name?  ");		
		scanf("%s",&item[i].itemName);
		
		printf("Enter Item Price? ");
		scanf("%f",&item[i].price);
		
		printf("Enter Item Quantity?  ");
		scanf("%d",&item[i].quantity);
		
		item[i].totalAmount=(float)item[i].quantity*item[i].price;
		expenses += item[i].totalAmount; 

		i++;	//increase loop counter
		count++;//increase record counter
		
		printf("\nWant to more items (press 1): ");
		scanf("%d",&choice);
		
		getchar();
		
	}while(choice==1);

}

//print all items
void putItemDetails(struct ItemDetails item[MAX]){
	int i,choice,friends;
	float finalExpenses=0.0f;
	printf("All details are:\n");
	printf("Item Name\t\tItem Price\tItem Qty\tTotal\n");
	for(i=0; i<count; i++)
	{
		printf("  %d]%s\t\t%.2f\t\t%3d\t\t%.2f\n",i+1,item[i].itemName,item[i].price,item[i].quantity,item[i].totalAmount);
	}
	printf("\n#### Total expense: %.2f\n",expenses);
	
	printf("\nWant to divide in friends (press 1 for yes): ");
	scanf("%d",&choice);
	if(choice==1)
	{ 
		printf("\nHow many friends? ");
		scanf("%d",&friends);
		finalExpenses=expenses/friends;
		//printf("\nEach friend will have to pay: %.2f\n",(expenses/(float)friends));
		printf("\nEach friend will have to pay: %.2f\n",finalExpenses);
	}
	
	printf("\n~Thanks for using me... Enjoy your party!!!~\n");

}
