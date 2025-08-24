#include <iostream>
#include "../Library/array_library.h"

using namespace std;

int main() {
    Array arr1 = {{1,3,5,7,9}, 10, 5};
    Array arr2 = {{2,4,6,8,10}, 10, 5};
    Array *arr3;
    cout << "This is the main function of the Array ADT project." << endl;
    // append(arr, 15);
    // append(arr, 14);
    // insert(arr, 2, 69);
    // delete_element(arr, 3);
    // Max(arr);
    // Min(arr);
    // cout << "Sum of array elements: " << Sum(arr) << endl;
    // cout << "Average of array elements: " << Average(arr) << endl;
    // cout <<"Before reversing: ";
    // display(arr);
    // cout <<endl;
    // Reverse2(arr);
    // cout <<"After reversing 2: ";
    // display(arr);
    // bool sorted_result = is_sorted(arr);
    // if (sorted_result) {
    //     cout << "The array is sorted." << endl;
    // } else {
    //     cout << "The array is not sorted." << endl;
    // }
    // insert_sorted(arr, 7);
    // cout << "After inserting 7 in sorted order: ";
    // left_shift(arr);
    // cout << "After left shifting: ";
    arr3 = merge(arr1, arr2);
    display(*arr3);
    delete arr3; // Free the allocated memory
    return 0;
}
