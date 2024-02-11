// Write a program to check whether the given array is palindrome or not


// Case 1 : 

// Sample Input →n (size of array) : 4                             

// Sample Input → Elements of array  :  1 2 2 1         

// Sample Output → Yes its a Palindromic Array      

  

// Case 2 :

// Sample Input →n (size of array) : 4

// Sample Input → Elements of array  :  1 2 3 4

// Sample Output → No its not a  Palindromic Array

#include<stdio.h>

int main() {
    // Declare variables to store the size of the array and a flag to check for palindrome
    int sizeOfArray, flag = 1;

    printf("Enter the size of array: ");
    scanf("%i", &sizeOfArray);

    int Array[sizeOfArray];
    
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Enter the %i element of array: ", i + 1);
        scanf("%i", &Array[i]);
    }
    
    // Loop to check for palindrome property until the midpoint of the array
    for (int i = 0; i < sizeOfArray / 2; i++) {
        // Compare elements from the start and end of the array
        if (Array[i] != Array[sizeOfArray - i - 1]) {
            // If elements don't match, it's not a palindrome
            printf("No, it's not a palindromic array.");
            flag = 0;
            break;
        }
    }
    
    // If flag remains 1, it means array is a palindrome
    if (flag) {
        printf("Yes, it's a palindromic array.");
    }

    return 0;
}


