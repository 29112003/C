// Write a  program to check whether a given number is a 'Perfect' number or not. 
// Sample Input → n : 6      

// [ Explanation : A number whose sum of factors(excluding number itself) is equal to  itself  ]                                              

// [ For e.g 6 , Sum of Factor of 6 ⇒ 1 + 2 + 3 ⇒ 6  ]

// Sample Output → Yes it is a Perfect Number

#include<stdio.h>

int main(){

    int n;

    printf("Enter the number:");
    scanf("%i", &n);

    int sum = 0;

    int clone = n;

    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("Yes it is a Perfect Number");
    }
    else{
        printf("No, it is not a Perfect Number");
    }

    return 0;
}


