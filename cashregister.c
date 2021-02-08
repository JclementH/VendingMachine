#include "cashregister.h"

int currentBalance(int balance, int totalCost) {
	int nb, confirm;
	//Prompts the user to enter the required money to be deposited
	//If user has deposited a deficit to the totalCost, then the totalCost would be differentiated with the current balance.
	printf("Deposit %i\n", totalCost - balance);
	scanf("%i", &nb);
	balance = balance + nb;
	//Confirmation prompt
	printf("-------------------\n");
	printf("Confirm deposit?\n\n");
	printf("[1] yes\n");
	printf("[2] no\n");
	printf("-------------------\n");
	//Gets user input (whether 1 yes or 2 no) for confirmation
	scanf("%i", &confirm);
	confirmation(confirm, balance, totalCost);
}
//Function for the confirmation values (1 and 2) and what happens to each.
int confirmation(int confirm, int balance, int totalCost) {
	if(confirm == 1) {
		return change(balance, totalCost);
	} else {
		return currentBalance(0, totalCost);
	}
}

int change(int balance, int totalCost) {
	int change, added;
	//If statements for each scenario of balance and totalCost difference.
	//First scenario is when balance is equal to totalCost. This then proceeds to acceptMoney().
	if(balance == totalCost) {
		acceptMoney();
	} 
	//Second scenario is when balance is less than the totalCost. This then returns the user to the currentBalance() function with his current balance still in place.
	//Example: if user entered balance = 10 for totalCost = 15, when he/she is prompted to deposit again, he/she would only need to deposit his difference.
	else if(balance < totalCost) {
		printf("You have inputted less than your total cost. Please deposit more: \n");
		currentBalance(balance, totalCost);
	} 
	//Third scenario is when balance is greater than the totalCost. This then gives back the change to the user and proceeds to acceptMoney().
	else if(balance > totalCost) {
		change = balance - totalCost;
		printf("Your change is: %i", change);
		acceptMoney();
	}
	//Returns 0 to exit.
	return 0;
}

int acceptMoney() {
	printf("\nCollect your items at the bottom");
	//Returns 0 to exit.
	return 0;
}
