// 07.  * * * * *
//       * * * *
//        * * *
//         * *
//          *

#include<stdio.h>

int main(){

    printf("Enter the number: ");

    int n;

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    


    return 0;
}