/* ---------------------------------------------
| Central string program
| CS480 - HW2
| By: Austin Abhari
|     David Miller
-----------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// definition of ptr


// Will create a string where each of the characters is doubled so that the result string is twice the size of the input string
// Make sure to provide enough space when calling malloc().
// For an example string What???, the result string will be WWhhaatt??????

char* char_nochange(char* str){
    return str;
}

char* char_double(char* str){
    char* ptr = (char*)malloc(sizeof(80));
    char* new_str = ptr;
    while (*str != '\0'){
        // Copy character into the new array
        *new_str = *str;
        // Advance the new array by 1
        new_str++;
        // Copy again
        *new_str = *str;
        // Advance the new array again
        new_str++;
        // Advance str
        str++;
        }
    return new_str;
}

// Will kind of double the string like above, but each second character is the successor of the preceeding character in the ASCII table.
// So, for let's say the string Bye you get BCyzef

char* char_shift(char* str){
    return str; 
}

//will make a small letter a capital letter and vice versa
//So, for Bye you get bYE

char* char_flip(char* str){
    while (*str != '\0'){
        if (*str >= 'A' && str <= 'Z')                                          // Check for uppercase
        *str = *str + 32;
        if(*str >= 'a' && str <= 'b')
        *str = *str - 32;
        str++;
        }
    return str;
}

int main(int argc, char* argv[])
{
    //char* str = argv[1];

    char* idk = "hello world";

    printf("%s", char_double(idk));
    
    return 0;
}

char** string_central (char* (*ptr[])(char*), char* str){

}

