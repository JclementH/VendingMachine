#include "dispenser.h"
#include "vending.h"
#include "cashregister.h"

//Function that declares the items in the dispenser (i.e. sold by the vending machine). Its name, number, and cost.
int getCount(int selected, int quantity) {
	//Declaration for candies
	struct inventoryInDispenser candies;
	strcpy(candies.nameOfItem, "candies");
	candies.numberOfItems = 100;
	candies.cost = 10;
	//Declaration for chips
	struct inventoryInDispenser chips;
	strcpy(candies.nameOfItem, "chips");
	chips.numberOfItems = 100;
	chips.cost = 15;
	//Declaration for cookies
	struct inventoryInDispenser cookies;
	strcpy(candies.nameOfItem, "cookies");
	cookies.numberOfItems = 100;
	cookies.cost = 15;
	//Declaration for soda
	struct inventoryInDispenser soda;
	strcpy(candies.nameOfItem, "soda");
	soda.numberOfItems = 100;
	soda.cost = 25;
	//
	switch(selected) {
		case 1 :	//Chosen candies: check if availability in dispenser is not 0 and 
				//give cost and quantity (given by user); otherwise prompt that item is unavailable.
				if(candies.numberOfItems != 0) {
						getProductCost(candies.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", candies.nameOfItem);
					}
					break;
		case 2 :	//Chosen chips: check if availability in dispenser is not 0 and 
				//give cost and quantity (given by user); otherwise prompt that item is unavailable.
				if(chips.numberOfItems != 0) {
						getProductCost(chips.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", chips.nameOfItem);
					}
					break;
		case 3 :	//Chosen cookies: check if availability in dispenser is not 0 and 
				//give cost and quantity (given by user); otherwise prompt that item is unavailable.
				if(cookies.numberOfItems != 0) {
						getProductCost(cookies.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", cookies.nameOfItem);
					}
					break;
		case 4 :	//Chosen soda: check if availability in dispenser is not 0 and 
				//give cost and quantity (given by user); otherwise prompt that item is unavailable.
				if(soda.numberOfItems != 0) {
						getProductCost(soda.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", soda.nameOfItem);
					}
					break;
	}
	//
	return 0;
}
//Function that multiplies quantity required by user by the cost of chosen item
int getProductCost (int cost, int quantity) {
	int totalCost;
	//
	totalCost = cost*quantity;
	makeSale(totalCost);
	//
	return 0;
}
//Function that sends the totalCost value to the currentBalance() function.
int makeSale(int totalCost) {
	currentBalance(0, totalCost);
	return 0;
}
