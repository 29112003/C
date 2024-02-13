// Write a  program to check whether a given number is a 'Harshad' number or not. 
// Sample Input → n : 24      

// [ Explanation : Harshad number is a number which is completely divisible by sum of its digits ]                                              

// [ For e.g 24 , Sum of digits = 2 + 4 = 6 , 24 % 6 = 0 which means it is completely divisible ]

// Sample Output → Yes it is a Harshad Number

#include<stdio.h>

int main(){

    int n;

    printf("Enter the number:");

    scanf("%i", &n);

    int rem = 0,sumOfDigit = 0;

    int clone = n;

    while (n>0)
    {
        rem = n%10;

        sumOfDigit = sumOfDigit + rem;

        n/=10;
    }
    
    if (clone%sumOfDigit == 0)
    {
        printf("Yes it is a Harshad Number");
    }
    else{
        printf("No, it is not a Harshad Number");
    }

    return 0;
}