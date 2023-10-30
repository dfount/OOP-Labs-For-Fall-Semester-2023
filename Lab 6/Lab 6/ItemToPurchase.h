#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>

using namespace std;

class ItemToPurchase {
private:
	string itemName;
	double itemPrice;
	int itemQuantity;

public:
	ItemToPurchase();
	void SetName(string name);
	void SetPrice(double price);
	void SetQuantity(int quantity);
	string GetName();
	double GetPrice();
	int GetQuantity();
};
#endif
