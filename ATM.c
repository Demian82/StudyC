#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int menu;
	int balance = 10000;
	
	while(1)
	{
		printf("***** Welcome to Concert ATM *****\n");
		printf("****Select Menu****\n");
		printf("<1> Check The Balance\n<2> Deposit\n<3> Withdrawals\n<4> Exit\n");
		scanf("%d", menu);
		
		if (menu==1)
		    CheckBalance(balance);
		else if (menu==2)
		    balance = MoneyDeposit(balance);
		else if (menu==3)
		    balance = MoneyWithdraw(balance);
		else
		    break;
	}
	return 0;
}

void CheckBalance(int balance)
{
	printf("*** balance : $%d\n", balance);
}

int MoneyDeposit(int balance)
{
	int money;
	printf("*** Input to deposit money : \n");
	scanf("%d", &money);
	balance = balance + money;
	printf("새로운 잔고는 %d입니다.\n", balance); 
	
	return balance;
}

int MoneyWithdraw(int balance)
{
	int money;
	printf("*** Input to withdrawal money : \n");
	scanf("%d", &money);
	balance = balance - money;
	printf("새로운 잔는 %d입니다.\n", balance); 
	
	return balance;
}
