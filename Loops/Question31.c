// Write a C program to print Fibonacci series up to Nth terms
// Sample Input → N : 7                                                                                        

// Sample Output → 0 1 1 2 3 5 8    


#include<stdio.h>
int main(){

    int  current = 0 , previous = 1 , next,n;

    printf("Enter the number of terms : ");
    scanf("%i", &n);

    printf("%i ",current );

    next = current + previous;

    for (int i = 1; i < n ; i++)
    {
        printf("%i ", next);
        previous = current;
        current = next;
        next = current+previous;
    }

    return 0;
}








