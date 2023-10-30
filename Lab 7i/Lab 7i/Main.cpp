#include "FoodItem.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Create a FoodItem object using the default constructor
    FoodItem water;
    water.PrintInfo();
    cout << "Number of calories for 1.00 serving(s): " << water.GetCalories(1.0) << endl << endl;

    // Create a FoodItem object using the parameterized constructor
    FoodItem mms("M&M's", 10.0, 34.0, 2.0);
    mms.PrintInfo();
    cout << "Number of calories for 1.00 serving(s): " << mms.GetCalories(1.0) << endl;
    cout << "Number of calories for 3.00 serving(s): " << mms.GetCalories(3.0) << endl;

    return 0;
}