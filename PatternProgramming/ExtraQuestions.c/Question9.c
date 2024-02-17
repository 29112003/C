// 09.      *
//         * *
//        *   *
//       *     *
//      *********

#include<stdio.h>
int main(){

    int n;

    printf("Enter the number: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j == n+1 || i == n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        for (int k = 2; k <= n; k++)
        {
            if (k == i && i != 1 || i == n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}