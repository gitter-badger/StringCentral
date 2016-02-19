/* ---------------------------------------------
| Central string program
| CS480 - HW2
| By: Austin Abhari
|     David Starr
-----------------------------------------------*/

#include <stdio.h>
#include <string.h>

char* char_double(char* str);
char* char_shift(char* str);
char* char_flip(char* str);


int main()
{
   

    return 0;
}

// Will create a string where each of the characters is doubled so that the result string is twice the size of the input string
// Make sure to provide enough space when calling malloc().
// For an example string What???, the result string will be WWhhaatt??????

char* char_double(char* str){
    
}

// Will kind of double the string like above, but each second character is the successor of the preceeding character in the ASCII table.
// So, for let's say the string Bye you get BCyzef

char* char_shift(char* str){
    ch = str[100];
    int j = 0;
    
    
    
    
}

//will make a small letter a capital letter and vice versa
//So, for Bye you get bYE

char* char_flip(char* str){
    int k = 0;
    while (str[k] != '\0'){                                                     // Making sure array not outof bounds
        if(str[k] >= 'A'&& str[k] <= 'Z')                                       // Checking for uppercase
            str[k] = str[k] + 32;                                               // Switching to lowercase
        if(str[k] >= 'a' && str[k] >= 'z')                                      // Checking lowercase
            str[k] = str[k] - 32;                                               // Switching to upppercase
    }
    return str;
}

