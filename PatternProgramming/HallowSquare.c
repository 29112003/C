// Hallow Square - Star
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

#include<stdio.h>
int main(){

    printf("Enter the nuber Of rows");

    int n;

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n-1 || j == n-1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}