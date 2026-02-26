
#include <stdio.h>

int main( void ) {

    // define suitable data
    char buffer [100];
    int num1, num2;
    char operator; 

    printf("Enter expression (such as 3 + 4 =):  ");

    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    if (fgets(buffer, sizeof buffer, stdin) == NULL) {
        printf("Input error\n");
        return 1;
    }

    int count = sscanf(buffer, "%d %c %d =", &num1, &operator, &num2);

    printf("sscanf returned: %d\n", count);
    printf("values read: num1 = %d, operator = %c, num2 =%d\n", num1, operator, num2);

    return 0;
}