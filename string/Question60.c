// Write a program to Alternatively Merge two Strings
// Sample Input → String 1  : “abcde”

// Sample Input → String 2  : “pqrst”

// Sample Output → Result ⇒ “apbqcrdset”  

#include <stdio.h>

int main() {
    char string1[] = "abcde";
    char string2[] = "pqrst";
    
    int sizeOfString1 = 0;
    int sizeOfString2 = 0;

    while(string1[sizeOfString1] != '\0'){
        sizeOfString1++;
    }
    while(string2[sizeOfString2] != '\0'){
        sizeOfString2++;
    }
    int totalSize = sizeOfString1 + sizeOfString2 -2;

    for(int i = 0 ; i <= totalSize ; i++){
        
    }


    return 0;
}


