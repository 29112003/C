// Write a program to print the power of a raised to the power of b.
// Sample Input → a : 10                                         

// Sample Input → b : 2                                            

// [ Explanation : a ^ b ⇒ 10^2 ⇒ 10*10 = 100  ]   

// Sample Output → 100                                           


#include <stdio.h>

int main() {

    printf("Enter the base: ");
    int base;
    scanf("%i", &base);

    printf("Enter the power: ");
    int power;
    scanf("%i", &power);

    int answer = 1;

    for (int i = 0; i < power; i++) {
        answer = answer * base;
    }

    printf("Result: %i\n", answer);

    return 0;
}












