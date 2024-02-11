// Write a program to print the characters of a string in reverse order.
// Sample Input →String  : “adakam”                           

// Sample Output → Result ⇒ “makada”

#include <stdio.h>

int main() {
    char string[1000];

    // Input a string
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Calculate the length of the string
    int sizeOfString = 0;
    while (string[sizeOfString] != '\0') {
        sizeOfString++;
    }
    sizeOfString--;  //removing the '\0' from the end of the string or Adjusting for the newline character 

    // Reverse the string
    for (int i = 0; i < sizeOfString / 2; i++) {
        char temp = string[i];
        string[i] = string[sizeOfString - i - 1];
        string[sizeOfString - i - 1] = temp;
    }

    // Output the reversed string
    printf("Reversed string: %s", string);

    return 0;
}
