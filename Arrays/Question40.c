// Write a program  to print positive and negative elements of an array separately .  
// Sample Input → n (size of array) : 5      

// Sample Input → Elements of array  :  1 -23 56 -69 36

// Sample Output → Positive Elements : 1 56 36

// Sample Output → Negative Elements : -23 -69
#include<stdio.h>

int main() {
    int sizeOfArray;

    // Step 1: Input Size of Array
    printf("Enter the size of the array: ");
    scanf("%i", &sizeOfArray);

    int array[sizeOfArray];

    // Step 2: Input Elements
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter element %i of the array: ", i+1);
        scanf("%i", &array[i]);
    }

    // Step 3: Display Positive and Negative Elements
    printf("Positive Elements: ");
    for (int i = 0; i < sizeOfArray; i++) {
        if (array[i] > 0) {
            printf("%i ", array[i]);
        }
    }

    printf("\nNegative Elements: ");
    for (int i = 0; i < sizeOfArray; i++) {
        if (array[i] < 0) {
            printf("%i ", array[i]);
        }
    }

    return 0;
}
