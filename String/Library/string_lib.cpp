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

void to_lowercase(char str[])
{
    for (int i = 0; str[i] != '\0';i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
}

void reverse_case(char str[])
{
    for (int i=0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
}

int count_words(char str[]){
    int i = 0, word_count = 0;
    while(str[i]!='\0'){
        if(str[i] == ' ' && str[i-1] != ' ')
        {
            word_count++;
        }
        i++;
    }
    return word_count+1;
}