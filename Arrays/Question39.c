// Write a program  to accept n elements  in an array and print it in normal order and in reverse order
// Sample Input → n (size of array) : 5      

// Sample Input → Elements of array  :  1 2 3 4 5

// Sample Output → Normal Order : 1 2 3 4 5

// Sample Output → Reverse Order : 5 4 3 2 1
#include <stdio.h>

int main() {
    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");

    // Declare a variable to store the size of the array
    int sizeOfArray;

    // Read the size of the array from the user
    scanf("%i", &sizeOfArray);

    // Declare an array of integers with the given size
    int arr[sizeOfArray];

    // Prompt the user to enter elements for the array
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter the %i element of the array: ", i+1);
        scanf("%i", &arr[i]);
    }

    // Print the elements of the array in normal order
    printf("Normal Order: ");
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%i ", arr[i]);
    }

    // Print the elements of the array in reverse order
    printf("\nReverse Order: ");
    for (int i = sizeOfArray-1; i >= 0; i--) {
        printf("%i ", arr[i]);
    }

    return 0;
}



