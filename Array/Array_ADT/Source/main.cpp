#include <iostream>
#include "../Library/array_library.h"

using namespace std;

int main() {
    Array arr = {{55, 10, 5, 20, 35}, 10, 5};
    cout << "This is the main function of the Array ADT project." << endl;
    append(arr, 15);
    append(arr, 14);
    display(arr);
    cout << arr.length << endl;
    return 0;
}