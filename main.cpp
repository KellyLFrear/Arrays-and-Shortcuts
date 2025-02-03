
#include "library.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int capacity;
    srand (time(NULL));

    cout << "Enter the capacity of the array:\t";
    cin >> capacity;

    // Initialize the array using random int values.
    int test[capacity];
    cout << "Before:\t";
    for (int i = 0; i < capacity; i++){
        test[i] = rand() % 100;
        cout << test[i] << " ";
    }

    // Test the reverse function.
    cout << "\nAfter (Reversed): ";
    reverse(test, capacity);

    // This calls the display function.
    display(test, capacity);

    // Test the sort function.
    insertion_sort(test, capacity);
    cout << " ";
    display(test, capacity); // this will display the array again now that it's done sorting

    return 0;
}