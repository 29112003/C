// 8.      *
//        ***
//       *****
//      *******
//     *********

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-i-1; k++)
        { 
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int d = 0; d < i; d++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}