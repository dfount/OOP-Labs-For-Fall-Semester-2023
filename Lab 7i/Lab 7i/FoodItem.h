#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H

#include <string>

using namespace std;

class FoodItem {
public:
    FoodItem();

    FoodItem(string user_name, double userFatAmt,
        double userCarbAmt, double userProteinAmt);

    string GetName();

    double GetFat();

    double GetCarbs();

    double GetProtein();

    double GetCalories(double numServings);

    void PrintInfo();

private:
    string name;
    double fat;
    double carbs;
    double protein;
};

#endif // FOOD_ITEM_H