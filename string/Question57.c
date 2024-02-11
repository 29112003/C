// Write a program to check whether string is palindromic or not

// Case 1 :

// Sample Input → String  : “level”                                    

// Sample Output → Palindromic String

// Case 2 :

// Sample Input → String  : “level up”   

// Sample Output → Not a Palindromic String 

#include <stdio.h>

int main() {
    char string1[1000];

    printf("Enter a string: ");
    fgets(string1, 1000, stdin);
    
    // Calculate the length of the input string
    int sizeOfString1 = 0;
    while (string1[sizeOfString1] != '\0') {
        sizeOfString1++;
    }
    sizeOfString1--; //removing the '\0' and Adjust for the null terminator
    
    int count = 1;
    for (int i = 0; i < sizeOfString1 / 2; i++) {
        if (string1[i] != string1[sizeOfString1 - i - 1]) {
            count = 0;
            printf("Not a Palindromic String.\n");
            break;
        }
    }

    if (count) {
        printf("Palindromic String.\n");
    }

    return 0;
}
