// Write a program of Array right Rotation by 1 element.
// Sample Input →n (size of array) : 5     
// Sample Input → Elements of array  :  1 2 3 4 5                                   
// Sample Output → Result ⇒ 5 1 2 3 4
#include<stdio.h>

int main() {
    // Declare variable to store the size of the array
    int sizeOfArray;

    printf("Enter the size of the array: ");
    
    // Read the size of the array from the user
    scanf("%i", &sizeOfArray);

    // Declare an array of integers with the specified size
    int array[sizeOfArray];

    // Input
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter the %i element of the array: ", i + 1);
        scanf("%i", &array[i]);
    }
    
    // Store the last element of the array in a variable
    int last = array[sizeOfArray - 1];

    // Loop to shift elements of the array to the right
    for (int i = sizeOfArray - 1; i >= 0; i--) {
        // Shift each element to the right by one position
        array[i] = array[i - 1];
    }

    // Move the last element to the first position of the array
    array[0] = last;

    // Print the rotated array
    printf("After rotating the array:\n");
    for (int i = sizeOfArray - 1; i >= 0; i--) {\
        printf("%i ", array[i]);
    }

    return 0;
}
