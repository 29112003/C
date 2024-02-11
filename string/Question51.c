// Write a program  to input a string and print it. Also, find its length.
// Sample Input →String  : “Hello Shery”                           

// Sample Output → String is “Hello Shery” and its length is 11
#include <stdio.h>

int main() {
    char string[999];

    // Input a string
    printf("Enter a string: ");
    fgets(string, 999, stdin);

    // Output the entered string
    printf("You entered: %s", string);

    return 0;
}
