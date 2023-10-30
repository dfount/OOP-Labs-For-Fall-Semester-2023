#include<iostream>
#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
	itemName = "none";
	itemPrice = 0.0;
	itemQuantity = 0;
}
void ItemToPurchase::SetName(string name) {
	itemName = name;
}
void ItemToPurchase::SetPrice(double price) {
	itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quantity) {
	itemQuantity = quantity;
}
string ItemToPurchase::GetName() {
	return itemName;
}
double ItemToPurchase::GetPrice() {
	return itemPrice;
}
int ItemToPurchase::GetQuantity() {
	return itemQuantity;
}
