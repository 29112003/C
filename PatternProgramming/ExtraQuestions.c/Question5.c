// 5.  *********
//      *******
//       *****
//        ***
//         *

#include<stdio.h>
int main(){
    printf("Enter the number");
    int n;
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = n - i; k <= n - 1; k++)
        {
            printf(" ");
        }
        for (int j = i; j < n; j++)
        {
            printf("*");
        }
        for (int j = i; j < n - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}