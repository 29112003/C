// Write a program to print the sum of all factors of a number
// Sample Input → Number : 12                                

// [ Explanation : Factors of 12 = 1,2,3,4,6,12 ]         

// [ Sum of Factors =1 + 2 + 3 + 4 + 6 + 12 = 28 ] 

// Sample Output → Sum ⇒ 28  
#include<stdio.h>

int main() {
    // Declare variables
    int N;

    // Ask the user to enter a number
    printf("Enter the Number: ");

    // Read the input number
    scanf("%i", &N);

    // Initialize the sum of factors
    int sumOfFactors = 0;

    // Calculate the sum of factors of the input number
    for (int i = 1; i <= N; i++) {
        // Check if i is a factor of N
        if (N % i == 0) {
            // If i is a factor, add it to the sumOfFactors
            sumOfFactors = sumOfFactors + i;
        }
    }
    
    // Print the sum of factors
    printf("Sum of Factors: %i", sumOfFactors);

    return 0;
}
