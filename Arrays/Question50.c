// Write a program  to find the largest element of an array and print its index.
// Sample Input →n (size of array) : 5     

// Sample Input → Elements of array  :  7 27 12 19 3                                   

// Sample Output → 27 is largest element and its index is 1

#include<stdio.h>

int main() {
    int sizeOfArray;

    printf("Enter the size of the Array: ");
    scanf("%i", &sizeOfArray);

    int array[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter the %i element of Array: ", i + 1);
        scanf("%i", &array[i]);
    }
    
    int largest = array[0], index = 0;

    for (int i = 1; i < sizeOfArray; i++) {
        // Compare the current element with the largest element found so far
        if (largest < array[i]) {
            // If the current element is larger, update the largest element and its index
            largest = array[i];
            index = i;
        }
    }

    // Print the largest element and its index
    printf("%i is the largest element and its index is %i", largest, index);

    return 0;
}
