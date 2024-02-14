// Right Triangle - Number
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<stdio.h>

int main(){

    printf("Enter the number of rows : ");

    int rows;

    scanf("%i", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%i ",j);
        }
        printf("\n");
    }

    return 0;
}