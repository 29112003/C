// Write a  program to find the LCM of two numbers
// Sample Input → a : 6

// Sample Input → b : 12

// Sample Output → The LCM of 6 & 12 is 12  


#include<stdio.h>
int main(){

    int first,second;

    printf("Enter the number: ");

    scanf("%i", &first);

    printf("Enter the one more number: ");
    scanf("%i", &second);

    int high = first < second ? second : first;

    for (int i = high; i <= first*second; i++)
    {
        if (i%first == 0 && i%second == 0)
        {
            printf("LCM of %i and %i is : %i ",first,second,i);
            break;
        }
    }

    return 0;
}

