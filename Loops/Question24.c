// Write a program to print the factorial of a number
// Sample Input → Number : 5                               

// Sample Output → Factorial ⇒ 120                      
#include<stdio.h>

int main() {
    int N, fact = 1;// *Note fact = 1;

    // Ask the user to enter a number
    printf("Enter the number: ");

    scanf("%i", &N);

    // Calculate the factorial of the input number
    for (int i = 1; i <= N; i++) {
        fact = fact * i;// fact = fact * something for Factorial
    }
    
    // Print the factorial
    printf("Factorial of %i is: %i", N, fact);

    return 0;
}
