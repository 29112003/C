// Write a program to find maximum occurring character( exclude space ) in a string and print how many time it appeared .
// Sample Input → String  : “Haan Bhoola Main Jahan Main Masti Mein Ghoomun Main Karta Dua Ke Hasti Rahe Tu”                           

// Sample Output → a is the maximum occurring character which comes 14 times  
#include <stdio.h>

int main() {
    // Given input string
    char input_string[] = "HaanAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA Bhoola Main Jahan Main Masti Mein Ghoomun Main Karta Dua Ke Hasti Rahe Tu";
    
    // Variable to store the maximum occurring character and its count
    char max_char;
    int max_count = 0;

    // Array to keep track of the count of each character
    int char_count[128] = {0}; 

    // Count occurrences of each character in the input string
    for (int i = 0; input_string[i] != '\0'; i++) {
        char ch = input_string[i];
        if (ch != ' ') { // Exclude spaces
            char_count[ch]++;
            if (char_count[ch] > max_count) {
                max_count = char_count[ch];
                max_char = ch;
            }
        }
    }

    // Print the result
    printf("%c is the maximum occurring character which comes %d times in the string.\n", max_char, max_count);

    return 0;
}
