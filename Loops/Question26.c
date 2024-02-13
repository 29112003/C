// Write a program to print the sum of all factors of a number
// Sample Input → Number : 12                                

// [ Explanation : Factors of 12 = 1,2,3,4,6,12 ]         

// [ Sum of Factors =1 + 2 + 3 + 4 + 6 + 12 = 28 ] 

// Sample Output → Sum ⇒ 28
#include<stdio.h>

int main() {
    int N;

    printf("Enter the Number: ");

    scanf("%i", &N);

    int sumOfFactors = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            sumOfFactors = sumOfFactors + i;
        }
    }
    
    printf("Sum of Factors: %i", sumOfFactors);

    return 0;
}
