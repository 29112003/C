// 10.  *********
//       *     *
//        *   *
//         * *
//          *

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int d = 1; d <= n; d++)
        {
            if (i == d || i == 1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for (int s = 2; s <= n; s++)
        {
            if (i == 1||i + s == n+1)
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