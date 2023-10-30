#include <iostream>
#include "ItemToPurchase.h"
#include <cstdlib>
using namespace std;

int main() {
	ItemToPurchase item1, item2;
	string name;
	double price;
	int q;
	cout << "Item 1" << endl;
	cout << "Enter the item name: ";
	getline(cin, name);
	cout << "Enter the item price: ";
	cin >> price;
	cout << "Enter the item quantity: ";
	cin >> q;
	item1.SetName(name);
	item1.SetPrice(price);
	item1.SetQuantity(q);
	cout << "\nItem 2" << endl;
	cout << "Enter the item name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter the item price: ";
	cin >> price;
	cout << "Enter the item quantity: ";
	cin >> q;
	item2.SetName(name);
	item2.SetPrice(price);
	item2.SetQuantity(q);
	int totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());



	cout << "TOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
	cout << "Total: $" << totalCost << endl;
	return 0;
}
