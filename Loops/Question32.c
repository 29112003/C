// Write a  program to check whether a number is a palindrome or not


// Case 1 :

// Sample Input →  Number : 121            

// Sample Output →  Palindromic Number    

// Case 2 :

// Sample Input →  Number : 123      

// Sample Output → Not a Palindromic Number

#include<stdio.h>

int main() {
    int n, rev = 0;

    printf("Enter the number: ");
    scanf("%i", &n);

    int clone = n;

    while (n > 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    
    if (clone == rev) {
        printf("Yes, it is a palindrome");
    } else {
        printf("No, it is not a palindrome");
    }

    return 0;
}
