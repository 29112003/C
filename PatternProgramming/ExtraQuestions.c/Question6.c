// 6.      *
//         * *
//        * * *
//       * * * *
//      * * * * *

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}