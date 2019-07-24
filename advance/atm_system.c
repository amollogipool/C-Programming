/* C Program to implement the concept of ATM System.
 */
#include <stdio.h>
#include <stdlib.h>
// Function Declaration.
void startTransaction(void);
void checkPin(void);
void selectTransaction(void);
void getMenu(void);
void checkBalance(void);
void withdrawal(void);
void amountToDeposit(void);
// Global Variable Declaration.
int pin;
char transaction='y';
unsigned long amount=500;
unsigned long withdraw;
unsigned long deposit;

int main() {
	startTransaction(); // Function call.
	return 0;
}

// Function to start the transaction process.
void startTransaction(void){
    checkPin(); // Function call
    selectTransaction(); // Function call
}

void checkPin(){
	while(pin != 1520){
	printf("ENTER YOUR SECRET PIN NUMBER:");
    scanf("%d", &pin);
    if (pin != 1520)
    printf("PLEASE ENTER VALID PASSWORD\n");
	}
}

void selectTransaction(void){
   int choice,k;
   do{
      getMenu();
      printf("Enter your choice: ");
      scanf("%d", &choice);
      switch (choice)
      {
       case 1:
	   checkBalance();
       break;
       case 2:
	   withdrawal();
       break;
       case 3:
	   amountToDeposit();
       break;
       case 4:
       printf("\n THANK U USING ATM");
       break;
       default:
       printf("\n INVALID CHOICE");
      }

    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
    fflush(stdin);
    
    scanf("%c", &transaction);
    if (transaction == 'n'|| transaction == 'N')
    
     k = 1;
  }while (!k);

}

void getMenu(void){
    printf("********Welcome to ATM Service**************\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Cash\n");
    printf("3. Deposit Cash\n");
    printf("4. Quit\n");
    printf("******************?**************************?*\n\n");
}

// Function to check if balance exists in account or not.
void checkBalance(void){
	printf("\n YOUR BALANCE IN Rs : %lu ",amount);
}

// Function to check if withdrawal amount is greater than available amount or not.
void withdrawal(void){
printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
scanf("%lu", &withdraw);
if (withdraw % 100 != 0)
{
printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
}
else if (withdraw >(amount - 500))
{
printf("\n INSUFFICENT BALANCE");
}
else
{
amount-=withdraw;
printf("\n\n PLEASE COLLECT CASH");
printf("\n YOUR CURRENT BALANCE IS: %lu",amount);
}
}

void amountToDeposit(void){
printf("\n ENTER THE AMOUNT TO DEPOSIT");
scanf("%lu", &deposit);
amount+=deposit;
printf("YOUR BALANCE IS: %lu",amount);
}

