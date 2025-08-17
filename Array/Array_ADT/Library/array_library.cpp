#include <iostream>
using namespace std;
#include "array_library.h"

void print_hello(){
    cout << "Hello, World!" << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
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
void linear_search(Array arr, int value) {
    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] == value){
            cout << value <<" found at index: " << i << endl;
            return;
        }
    }
        cout << value <<" not found in the array." << endl;
    }
void binary_search(Array arr, int value) {
    int low = 0;
    int high = arr.length - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr.A[mid] == value) {
            cout << value << " found at index: " << mid << endl;
            return;
        } else if (arr.A[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << value << " not found in the array." << endl;
}

int rbinary_search(Array arr, int value, int low, int high) {
    if (low > high) {
        return -1; // Value not found
    }
    int mid = (low + high) / 2;
    if (arr.A[mid] == value) {
        return mid;
    } else if (arr.A[mid] < value) {
        return rbinary_search(arr, value, mid + 1, high);
    } else {
        return rbinary_search(arr, value, low, mid - 1);
    }
}

int Get(Array arr, int index) {
    if(index >= 0 && index < arr.length){
        return arr.A[index];
    } else {
        cout << "Index out of bounds." << endl;
        return -1; // or some error value
    }
}

void Set(Array &arr, int index, int value) {
    if(index >= 0 && index < arr.length){
        arr.A[index] = value;
    } else {
        cout << "Index out of bounds." << endl;
    }
}

void Max(Array arr){
    if(arr.length == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    else{
        int max = arr.A[0];
        for (int i = 1; i < arr.length; i++) {
            if(arr.A[i] > max) {
                max = arr.A[i];
            }
        }
        cout << "Maximum value in the array is: " << max << endl;
    }
}

void Min(Array arr){
    if(arr.length == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    else{
        int min = arr.A[0];
        for (int i = 1; i < arr.length; i++) {
            if(arr.A[i] < min) {
                min = arr.A[i];
            }
        }
        cout << "Minimum value in the array is: " << min << endl;
    }
}

int Sum(Array arr) {
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
        sum += arr.A[i];
    }
    return sum;
}

int Average(Array arr) {
    if (arr.length == 0) {
        cout << "Array is empty." << endl;
        return 0; // or some error value
    }
    return Sum(arr) / arr.length;
}

void Reverse(Array &array){
    int start = 0;
    int end = array.length - 1;
    while(start < end) {
        swap(array.A[start], array.A[end]);
        start++;
        end--;
    }
}

void Reverse2(Array &array) {
    int *B = new int[array.length];
    for(int i = 0; i < array.length; i++) {
        B[i] = array.A[array.length - 1 - i];
    }

    for(int i = 0; i < array.length; i++) {
        array.A[i] = B[i];
    }
    delete[] B;
}

bool is_sorted(Array arr) {
    for(int i=0; i < arr.length - 1; i++) {
        if(arr.A[i] >arr.A[i + 1]) {
            return false; // Array is not sorted
        }
    }
    return true; // Array is sorted
}

void insert_sorted(Array &arr, int value) {
    if (arr.length > arr.size) {
        cout << "Array is full, cannot insert." << endl;
        return;
    }
    int i = arr.length - 1;
    while (i>=0 && arr.A[i]> value) {
        arr.A[i + 1] = arr.A[i];
        i--;
    }
    arr.A[i + 1] = value;
    arr.length++;
}