// Write a program to  find the sum and average up to nth term.
// Sample Input → Number : 5                                 

// Sample Output → Sum ⇒ 15 & Average ⇒ 3
#include<stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter the number: ");

    scanf("%i", &N);

    // Calculate the sum of numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        sum = sum + i;// sum = sum + something for sum
    }

    // Calculate the average
    int average = sum / N;

    // Print the sum and average
    printf("Sum => %i & Average => %i", sum, average);

    return 0;
}
