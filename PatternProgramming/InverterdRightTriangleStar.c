// Inverted Right Triangle - Star
// * * * * *
// * * * *
// * * *
// * *
// *

#include<stdio.h>
int main(){

    int n;

    printf("Enter the number of rows: ");

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n-i-1; j >= 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}