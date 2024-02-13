// Write a  program to check whether a number is a Strong Number or not.. 
// Sample Input → n : 145      

// [ Explanation :Sum of factorial of each digit will be equal to the original number ]                                              

// [ For e.g 145 , Sum of factorial of digits ⇒ 1! + 4! + 5! ⇒ 1 + 4*3*2*1 + 5*4*3*2*1  ⇒ 1 + 24 + 120 = 145  ]

// Sample Output → Yes it is a Strong Number


#include<stdio.h>
int main(){

    int n;

    int sum = 0;
    printf("Enter the number");

    scanf("%i", &n);

    int clone = n;

    while (n>0)
    {
        int rem = n%10;

        int fact = 1;

        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;

        n = n/10;
    }
    
    if (sum == clone)
    {
        printf("Yes, it is a Strong Number");
    }

    else{
        printf("No, it is not Strong Number");
    }

    return 0;
}