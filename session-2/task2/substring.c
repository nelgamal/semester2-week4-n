/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[] = "The quick brown fox jumped over the lazy dog";
    char substring[] = "ump";

    char *ptr = strstr(string, substring);

    if (ptr != NULL) {
        printf("Substring found: %s\n", ptr); 
    } else {
        printf("Substring not found.\n");
    }

    printf("Pointer (memory location): %p\n", (void *)ptr);
    printf("Character at pointer: %c\n", *ptr);
    printf("String from pointer: %s\n", ptr);
    
    return 0;
}