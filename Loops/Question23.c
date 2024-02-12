// Write a program in C to print natural numbers up to n
// Sample Input → N : 8                                          

// Sample Output → 1 2 3 4 5 6 7 8                        

#include <stdio.h>

int main() {
    // Print a message asking the user to enter a number
    printf("Numbers from 1 to 8:\n");

    // Loop from 1 to N
    for (int i = 1; i <= 8; i++) {
        // Print the current value of i followed by a space
        printf("%d ", i);
    }

    // Print a newline character to make the output clearer
    printf("\n");
    
    return 0;
}
