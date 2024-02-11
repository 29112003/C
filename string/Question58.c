// Write a program to remove the spaces from a string
// Sample Input → String  : “S H O O R V E E R ”                              

// Sample Output → Result ⇒ “SHOORVEER” 
#include <stdio.h>

int main() {
    char string1[1000];

    printf("Enter a string: ");
    fgets(string1,1000, stdin);
    
    // Calculate the length of the input string
    int sizeOfString1 = 0;
    while (string1[sizeOfString1] != '\0') {
        sizeOfString1++;
    }
    sizeOfString1--; 
    
    printf("Individual characters: ");
    for (int i = 0; i < sizeOfString1; i++) {
        printf("%c ", string1[i]);
    }
    printf("\n");

    return 0;
}
