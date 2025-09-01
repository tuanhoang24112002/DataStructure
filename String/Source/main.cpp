#include <iostream>
#include "../Library/string_lib.h"

using namespace std;

int main(){
    char str[] = "TUAN HOANG";
    cout << "Length of string is: " << length_of_string(str) << endl;
    cout << "After converting to lowercase: ";
    reverse_case(str);
    cout << str << endl;
    cout << "Number of words in the string: " << count_words(str) << endl;
    return 0;
}