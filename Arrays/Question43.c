// Write a program to perform Binary Search on an array If element found print the index else -1


// Case 1 :

// Sample Input → n (size of array) : 5                                       

// Sample Input → Elements of array  :  1 2 3 4 5                

// Sample Input → K (Element you want to search) : 5                                                      

// Sample Output → 5 found at 4 index          

                   

// Case 2 :

// Sample Input → n (size of array) : 5

// Sample Input → Elements of array  :  1 2 3 4 5

// Sample Input → K (Element you want to search) : 69 

// Sample Output → -1  

#include <stdio.h>

int main() {

    // Input: Size of the array
    int sizeOfArray;
    printf("Enter the size of the array: ");
    scanf("%i", &sizeOfArray);

    // Input: Elements of the array
    int Array[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter element %i of the array: ", i + 1);
        scanf("%i", &Array[i]);
    }

    // Input: Element to search
    int search;
    printf("Enter the element you want to search: ");
    scanf("%i", &search);

    // Binary search algorithm
    int start = 0, end = sizeOfArray - 1,mid ,flag = 1; // Flag to check if element found or not

    while (start <= end) {
        mid = (start + end) / 2;

        if (Array[mid] == search) {
            // Output: Element found
            printf("%i found at index %i\n", search, mid);
            flag = 0;
            break;
        } else if (Array[mid] > search) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // Output: Element not found
    if (flag) {
        printf("-1\n");
    }

    return 0;
}
