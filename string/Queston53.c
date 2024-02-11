// Write a program  to separate the individual characters from a string. 
// Sample Input → String  : “SHERYIANS”       
// Sample Output → S H E R Y I A N S

#include <stdio.h>

int main() {
    char string[1000];

    // Input a string
    printf("Enter a string: ");
    fgets(string, 1000, stdin);

    // The length of the string
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    i--; //removing the '\0' or  Adjust for the null terminator

    // excluding the null terminator
    printf("Individual characters: ");
    for (int j = 0; j < i; j++){
        printf("%c ", string[j]);
    }

    return 0;
}
