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
void insert(Array &arr, int index, int value) {
    if (index >= 0 && index <= arr.length && arr.length < arr.size) {
        for (int i = arr.length; i < index; i--) {
            arr.A[i] = arr.A[i - 1];
        }
        arr.A[index] = value;
        arr.length++;
    }
}
void delete_element(Array &arr, int index) {
    if (index >= 0 && index < arr.length) {
        for (int i = index; i < arr.length - 1; i++) {
            arr.A[i] = arr.A[i + 1];
        }
        arr.length--;
    } else {
        cout << "Index out of bounds." << endl;
    }
}