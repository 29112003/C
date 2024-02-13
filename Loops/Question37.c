// Write a  program to check whether a given number is an Armstrong number or not. 
// Sample Input → n : 407      

// [ Explanation : Sum of cube of all digits will be equal to itself]                                              

// [ For e.g 407 , Sum of cube of digits ⇒ 4^3 + 0^3 + 7^3 ⇒ 64 + 0 + 343 ⇒ 407  ]

// Sample Output → Yes it is a Armstrong Number

#include<stdio.h>
int main(){

    int n;

    printf("Enter the number : ");

    scanf("%i", &n);

    int sum = 0;

    int clone = n;

    while (n>0)
    {
        int rem = n%10;

        sum = sum + rem * rem *rem;

        n = n/10;
    }

    if (sum == clone)
    {
        printf("Yes, it is Armstrong number");
    }
    else{
        printf("No, it is not Armstrong number");
    }

    return 0;
}