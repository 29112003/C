// Write a program to print the sum of all even & odd numbers separately up to n term
// Sample Input → n : 10                                          

// [ Explanation : even  ⇒ 2,4,6,8,10  ]                    

// [ Sum of even  ⇒ 2+4+6+8+10 = 30  ]                

// Sample Output → 30     

#include<stdio.h>
int main(){

    int n,oddsum = 0 , evensum = 0;

    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            evensum +=i;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            oddsum +=i;
        }
    }

    printf("sum of all even terms : %i \n",evensum);
    printf("sum of all odd terms : %i ",oddsum);

    return 0;
}