// Write a program to sum of digits of a number
// Sample Input → Number : 465                                            

// [ Explanation : Sum   ⇒ 4 + 5 + 6 = 15  ]                                              

// Sample Output → 15  

#include<stdio.h>
int main(){

    int n,sum = 0,rem;

    printf("Enter the number");

    scanf("%i", &n);

    while (n != 0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    printf("%i", sum);

    return 0;
}





