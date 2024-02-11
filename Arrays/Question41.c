// Accept size n from user and create a n size array then take n inputs into the and finally
// Print the sum of all elements .  
// Sample Input → n (size of array) : 5      

// Sample Input → Elements of array  :  1 2 3 4 5

// [ Explanation : Sum of all Array Elements ⇒ 1 + 2 + 3 + 4 + 5 = 15 ]                                              

// Sample Output → Sum of all Array Elements  = 15 

#include<stdio.h>
int main(){

    printf("enter the size of array");

    int sizeOfArray;

    scanf("%i", &sizeOfArray);

    int array[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("enter the %i element of array",i+1);
        scanf("%i", &array[i]);
    }

    int sum = 0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        sum = sum + array[i];//sum +=array[i];
    }

    printf("Sum of all Array Elements = %i",sum);

    return 0;
}