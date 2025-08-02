#include <iostream>
using namespace std;
#include "array_library.h"

void print_hello(){
    cout << "Hello, World!" << endl;
}

void display(Array arr) {
    cout << "Array elements: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void append(Array &arr, int value){
    if (arr.length < arr.size) {
        arr.A[arr.length] = value;
        arr.length++;
    } else {
        cout << "Array is full, cannot append." << endl;
    }
} 