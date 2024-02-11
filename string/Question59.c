// Write a program to count the total number of alphabets, digits, and special characters in a string... 
// Sample Input → String  : “1 2 ka 4 , 4 2 ka 1 my name is  sheryians”                          

// Sample Output → Numbers of Alphabets ⇒ 21     

// Sample Output → Numbers of Digits ⇒ 6 

// Sample Output → Numbers of Special Characters ⇒ 1

#include <stdio.h>

int main() {
    char input_string[999];

    fgets(input_string,999,stdin);

    int sizeOfString1 = 0;

    while(input_string[sizeOfString1]){
        sizeOfString1++;
    }
    sizeOfString1--;

    int alpha_count = 0, digit_count = 0, special_count = 0;

    for (int i = 0; i < sizeOfString1 ; i++) {
        char ch = input_string[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alpha_count++;
        } else if (ch >= '0' && ch <= '9') {
            digit_count++;
        } else if (ch != ' ') {
            special_count++;
        }
    }

    printf("Numbers of Alphabets: %d\n", alpha_count);
    printf("Numbers of Digits: %d\n", digit_count);
    printf("Numbers of Special Characters: %d\n", special_count);

    return 0;
}

