// Write a program  to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
// Sample Input → n : 5      

// [ Explanation : Sum of the series  ⇒ 1 + 11 + 111 + 1111 + 11111 = 12345]                                              

// Sample Output → 12345




#include<stdio.h>
int main(){
    int n;

    printf("Enter the number : ");

    scanf("%i", &n);

    int sum = 0;
    int Sumofones = 0;

    for (int i = 0; i < n; i++)
    {
        Sumofones = Sumofones * 10 + 1;
        sum = sum + Sumofones;
    }
    printf("%i",sum);

    return 0;
}