#include "library.h"
#include <iostream>
using namespace std;

// This function displays the first n elements of an array.
void display(const int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  cout << endl;
}

// this function is the reverse function for the user that sets up the numbers in reverse
void reverse(int a[], int capacity){
      for(int i = 0; i < capacity/2; i++){
        int temporary;
        temporary = a[i];
        a[i] = a[capacity - i - 1];
        a[capacity - i - 1] = temporary;
    }
}

// This function sorts the first n elements of an array in ascending order using insertion sort.
// Modify this function so that it displays the array after each pass.
// Modify this function so that it displays the total number of comparisons and swaps after each pass.
void insertion_sort(int a[], int n) {
  int compare_counter = 0; // total number of comparisons
  int swap_counter = 0; // total number of swaps
  int j_total; // counts the total of j
  int i_total; // counts the total of i

  for (int i = 1; i < n; i++) {
    int round_compare = 0; // number of comparisons per round
    int round_swap = 0; // number of swaps per round
    i_total = i;

    for (int j = i; j > 0; j--) {
      j_total = j;
      compare_counter++; // comparions +1
      round_compare++; // round comparison +1
      if (a[j - 1] > a[j]) {
        swap(a[j - 1], a[j]);
        swap_counter++; // this tracks the number of swaps
        round_swap++; // swap for round +1
      } // end of if
    }   // end of loop on j
    cout << "\nPart " << i << ": " << round_compare << " comparisions and " << round_swap << " swaps." << endl;
    cout << "The array is now: ";
      for (int i = 0; i < n; i++) { // this reloops the array so it can display it fully as it was changed
        cout << a[i] << ' ';
      }
  }     // end of loop on i
  cout << "\n\nTotal Number of Swaps: " << swap_counter << "\nTotal Number of Comparisons: " << compare_counter << "\nAfter sorting: ";
} // end of insertion_sort
