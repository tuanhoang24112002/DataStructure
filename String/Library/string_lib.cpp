#include <iostream>
#include "string_lib.h"

using namespace std;

int length_of_string(char str[]){
    int i = 0, length = 0;
    while(str[i++] != '\0'){
        length++;
    }
    return length;
}
