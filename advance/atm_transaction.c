#include <stdio.h>
#include <stdlib.h>
/* 
C Program to implement the concept of ATM System.
 */
void startTransaction(void);
void checkPin(void);
void selectTransaction(void);
void checkBalance(void);

unsigned long amount;
unsigned long deposit;
unsigned long withdraw;
int main() {
	startTransaction();
	return 0;
}
void startTransaction(void){
	//printf("transaction");
    checkPin();
    selectTransaction();
    
}

void checkPin(void){
	printf("checkpin");
	int pin;
	while(pin != 1520){
	printf("ENTER YOUR SECRET PIN NUMBER:");
    scanf("%d", &pin);
    if (pin != 1520)
    printf("PLEASE ENTER VALID PASSWORD\n");
	}
}

void selectTransaction(void){
	
  char transaction ='y';
  int choice,k;
do
{
printf("********Welcome to ATM Service**************\n");
printf("1. Check Balance\n");
printf("2. Withdraw Cash\n");
printf("3. Deposit Cash\n");
printf("4. Quit\n");
printf("******************?**************************?*\n\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
checkBalance();
break;
case 2:
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
amount = amount - withdraw;
printf("\n\n PLEASE COLLECT CASH");
printf("\n YOUR CURRENT BALANCE IS%lu", amount);
}
break;
case 3:
printf("\n ENTER THE AMOUNT TO DEPOSIT");
scanf("%lu", &deposit);
amount = amount + deposit;
printf("YOUR BALANCE IS %lu", amount);
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
} while (!k);
}

void checkBalance(void){
	printf("\n YOUR BALANCE IN Rs : %lu ", amount);
}


