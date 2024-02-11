// Write a program to perform Linear Search on an array - If element found print the index else -1

// Case 1 :

// Sample Input → n (size of array) : 5                                       

// Sample Input → Elements of array  :  1 2 3 4 5                

// Sample Input → K (Element you wan to search) : 3                                                      

// Sample Output → 3 found at 2 index  

// Case 2 :

// Sample Input → n (size of array) : 5

// Sample Input → Elements of array  :  1 2 3 4 5

// Sample Input → K (Element you wan to search) : 69 

// Sample Output → -1   

#include<stdio.h>
int main(){

    printf("Enter the size of array");

    int sizeOfArray,flag,search;

    scanf("%i", &sizeOfArray);

    int array[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Enter %i element of array : ",i+1);
        scanf("%i",&array[i]);
    }

    printf("Enter the element that you want to search : ");

    scanf("%i",&search);


    for (int i = 0; i < sizeOfArray; i++)
    {
        if (array[i] == search)
        {
            printf("%i found at %i index",array[i],i);
            flag = 0;
            break;
        }
        
    }

    if (flag)
    {
        printf("-1");
    }
    

    return 0;
}