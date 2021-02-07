#include "dispenser.h"
#include "vending.h"
#include "cashregister.h"

int getCount(int selected, int quantity) {
	//
	struct inventoryInDispenser candies;
	strcpy(candies.nameOfItem, "candies");
	candies.numberOfItems = 100;
	candies.cost = 10;
	//
	struct inventoryInDispenser chips;
	strcpy(candies.nameOfItem, "chips");
	chips.numberOfItems = 100;
	chips.cost = 15;
	//
	struct inventoryInDispenser cookies;
	strcpy(candies.nameOfItem, "cookies");
	cookies.numberOfItems = 100;
	cookies.cost = 15;
	//
	struct inventoryInDispenser soda;
	strcpy(candies.nameOfItem, "soda");
	soda.numberOfItems = 100;
	soda.cost = 25;
	//
	switch(selected) {
		case 1 :	if(candies.numberOfItems != 0) {
						getProductCost(candies.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", candies.nameOfItem);
					}
					break;
		case 2 :	if(chips.numberOfItems != 0) {
						getProductCost(chips.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", chips.nameOfItem);
					}
					break;
		case 3 :	if(cookies.numberOfItems != 0) {
						getProductCost(cookies.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", cookies.nameOfItem);
					}
					break;
		case 4 :	if(soda.numberOfItems != 0) {
						getProductCost(soda.cost, quantity);
					} else {
						printf("Sorry! This item (%c) is no longer available.", soda.nameOfItem);
					}
					break;
	}
	//
	return 0;
}

int getProductCost (int cost, int quantity) {
	int totalCost;
	//
	totalCost = cost*quantity;
	makeSale(totalCost);
	//
	return 0;
}

int makeSale(int totalCost) {
	currentBalance(0, totalCost);
	return 0;
}
