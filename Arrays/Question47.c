// Write a program of Array left rotation by K elements.. 
// Sample Input →n (size of array) : 5     

// Sample Input → Elements of array  :  1 2 3 4 5

// Sample Input → K : 3                                     

// Sample Output → Result ⇒ 4 5 1 2 3
#include<stdio.h>

int main() {
    int sizeOfArray;

    printf("Enter the size of array: ");
    scanf("%i", &sizeOfArray);

    // Declare an array of integers with the specified size
    int Array[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter the %i element of Array: ", i + 1);
        scanf("%i", &Array[i]);
    }

    printf("Enter the value of k: ");

    // Declare variable to store the value of k
    int k;

    // Read the value of k from the user
    scanf("%i", &k);

    // Ensure k is within the range of the array size
    k = k % sizeOfArray;

    // Rotate the array k times
    for (int i = 0; i < k; i++) {
        // Store the first element of the array in a variable
        int first = Array[0];

        // Shift elements of the array to the left
        for (int i = 0; i < sizeOfArray; i++) {
            Array[i] = Array[i + 1];
        }
        
        // Move the first element to the last position of the array
        Array[sizeOfArray - 1] = first;
    }

    // Print the rotated array
    printf("After rotating the array:\n");
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%i ", Array[i]);
    }

    return 0;
}
