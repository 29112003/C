// Write a program of Array right rotation by K elements. 
// Sample Input →n (size of array) : 5     

// Sample Input → Elements of array  :  1 2 3 4 5

// Sample Input → K : 3                                     

// Sample Output → Result ⇒ 3 4 5 1 2

#include<stdio.h>

int main() {
    int sizeOfArray;

    printf("Enter the size of array: ");
    scanf("%i", &sizeOfArray);

    int Array[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter the %i element of Array: ", i + 1);
        scanf("%i", &Array[i]);
    }

    int k;

    printf("Enter the value of k for right rotation: ");

    scanf("%i", &k);

    // Ensure k is within the range of the array size
    k = k % sizeOfArray;

    // Rotate the array k times to the right
    for (int i = 0; i < k; i++) {
        // Store the last element of the array in a variable
        int last = Array[sizeOfArray - 1];

        // Shift elements of the array to the right
        for (int i = sizeOfArray - 1; i >= 0; i--) {
            Array[i] = Array[i - 1];
        }

        // Move the last element to the first position of the array
        Array[0] = last;
    }

    // Print the rotated array
    printf("After right rotation, the array is:\n");
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%i ", Array[i]);
    }

    return 0;
}
