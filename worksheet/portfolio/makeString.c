
/*
Name: Nadine ElGamal 
Student ID:201962580
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[50]; // 10 x 4 = 40 + 9 dashes in the middle = 49 and the terminator makes it 50 

    buffer[0] = '\0';
    // process the command-line data using appropriate string functions
    for (int i = 1; i < argc; i++){
        strncat(buffer, argv[i], 4); 
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0; 
}