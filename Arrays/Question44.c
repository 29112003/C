// Write a program to perform Bubble sort on an array  
// Sample Input → n (size of array) : 8      

// Sample Input → Elements of array  :  5 3 8 4 7 1 2 6

// Sample Output → Sorted Array : 1 2 3 4 5 6 7 8 
#include<stdio.h>

int main() {
    // Input: Size of the array
    int sizeOfArray;
    printf("Enter the size of the array: ");
    scanf("%i", &sizeOfArray);

    int Array[sizeOfArray];

    // Input: Elements of the array
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter element %i: ", i + 1);
        scanf("%i", &Array[i]);
    }

    // Sorting the array using Bubble Sort algorithm
    for (int i = 0; i < sizeOfArray - 1; i++) {
        int swap = 0; // Flag to check if any swap occurs

        for (int j = 0; j < sizeOfArray - 1 - i; j++) {
            if (Array[j] > Array[j + 1]) {
                // Swapping elements if they are in the wrong order
                int temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
                swap = 1; // Setting flag to true indicating swap occurred
            }
        }

        // If no swap occurred, array is already sorted
        if (swap == 0) {
            break;
        }
    }

    // Output: Sorted array
    printf("Sorted array: ");
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%i ", Array[i]);
    }
    
    return 0;
}
