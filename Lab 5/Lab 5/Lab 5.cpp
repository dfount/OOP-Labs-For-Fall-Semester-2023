#include <iostream>
using namespace std;

int comparisons = 0;
int swaps = 0;

int* ReadNums(int size) {
    int* nums = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }
    return nums;
}

void PrintNums(int nums[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << nums[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void InsertionSort(int nums[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = nums[i];
        int j = i - 1;
        comparisons++;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
            swaps++;
        }
        nums[j + 1] = key;
        PrintNums(nums, size);
    }
}

int main() {
    char choice;
    do {
        int size;
        cout << "Hello!" << endl;
        cout << "Enter the numbers for the array: ";
        cin >> size;

        int* array = ReadNums(size);

        PrintNums(array, size);
        InsertionSort(array, size);

        cout << "comparisons: " << comparisons << endl;
        cout << "swaps: " << swaps << endl;

        delete[] array;

        cout << "Would you want to run the code again? (y/n): ";
        cin >> choice;

        comparisons = 0;
        swaps = 0;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}