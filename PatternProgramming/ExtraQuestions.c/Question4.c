// 4.   *****
//       ****
//        ***
//         **
//          *

#include<stdio.h>
int main(){

    printf("enter the number : ");

    int n;

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j <= n - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n -i; k++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}