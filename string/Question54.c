// Write a program to compare two strings if they are identical print (identical) else (not identical)


// Case 1 :

// Sample Input → String 1  : “Labrador lag gaye”                                                 

// Sample Input → String 2  : “Labrador lag gaye”                                                  

// Sample Output → Identical   

// Case 2 :  

// Sample Input → String 1  : “Labrador lag gaye” 

// Sample Input → String 2  : “L**de lag gaye”

// Sample Output → Not identical

#include <stdio.h>

int main() {
    char string1[1000];
    char string2[1000];

    // Input two strings
    printf("Enter the first string: ");
    fgets(string1, 1000, stdin);
    printf("Enter the second string: ");
    fgets(string2, 1000, stdin);

    // Calculate the length of the first string
    int sizeOfString1 = 0;
    while (string1[sizeOfString1] != '\0') {
        sizeOfString1++;
    }

    // Calculate the length of the second string
    int sizeOfString2 = 0;
    while (string2[sizeOfString2] != '\0') {
        sizeOfString2++;
    }

    // Compare the lengths of the two strings
    int count = 1;
    if (sizeOfString1 != sizeOfString2) {
        printf("Strings are not identical");
        count = 0;
    } else {
        // Compare each character of the strings
        int i = 0;
        while (string1[i] != '\0') {
            if (string1[i] != string2[i]) {
                printf("Strings are not identical");
                count = 0;
                break;
            }
            i++;
        }
    }

    // Output the result
    // If count is 0 then false and 1 true
    if (count) {
        printf("Strings are identical");
    }

    return 0;
}
