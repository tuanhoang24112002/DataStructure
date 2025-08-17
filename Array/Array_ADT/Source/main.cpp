#include <iostream>
#include "../Library/array_library.h"

using namespace std;

int main() {
    Array arr = {{1,2,3,4,5,6,8}, 10, 7};
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
    left_shift(arr);
    cout << "After left shifting: ";
    display(arr);
    return 0;
}
