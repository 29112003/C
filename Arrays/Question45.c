// Write a program of Array left Rotation by 1 element. 
// Sample Input →n (size of array) : 5     

// Sample Input → Elements of array  :  1 2 3 4 5                                   

// Sample Output → Result ⇒ 2 3 4 5 1
#include <stdio.h>

int main() {
    // Declare variable to store the size of the array
    int sizeOfArray;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");

    // Read the input size from the user
    scanf("%i", &sizeOfArray);

    // Declare an array of integers with the specified size
    int array[sizeOfArray];

    // Input of array..
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter the %i element of the array: ", i + 1);
        scanf("%i", &array[i]);
    }

    // Store the first element of the array in a variable
    int first = array[0];

    // Loop to shift elements of the array to the left
    for (int i = 0; i < sizeOfArray; i++) {
        // Shift each element to the left by one position
        array[i] = array[i + 1];
    }

    // Move the first element to the last position of the array
    array[sizeOfArray - 1] = first;

    // Print the rotated array
    printf("After rotating the array:\n");
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%i ", array[i]);
    }

    // Indicate successful completion of the program
    return 0;
}
