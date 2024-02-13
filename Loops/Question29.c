// Write a program to find the prime numbers within a range of numbers
// Sample Input → Start : 10                                            

// Sample Input → End : 50                                            

// Sample Output → 11 , 13 , 17, 19, 23, 29, 31, 37, 41, 43, 47       


#include<stdio.h>
int main(){

    int start,end;

    printf("Enter the starting range: ");
    scanf("%i", &start);

    printf("Enter the ending range: ");
    scanf("%i", &end);

    for (int i = start; i <= end; i++)
    {
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%i ",i);
        }
    }

    return 0;
}




