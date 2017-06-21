/*
Eric Tran
cs50x
caesar.c
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    // get userinput as plaintext
    string plaintext = get_string();
    int key = 0;
    
    // make sure only 2 command-line arguments are given and second is a positive int
    if (argc != 2 || atoi(argv[1]) < 0) 
    {
        printf("Command-line argument must be a non-negative integer\n");
        return 1;
    }
   
    else
    {
        // key becomes converted and stored as an int
        key = atoi(argv[1]); 
    }
    
    // encrypt plaintext with i
    for (int i = 0, n = strlen(plaintext); i < n; i++) 
    {
        // uppercase text
        if (isupper(plaintext[i]) && isalpha(plaintext[i])) 
        {
            plaintext[i] = (plaintext[i] - 'A' + key) % 26 + 'A';
        }
        // lowercase text
        if (islower(plaintext[i]) && isalpha(plaintext[i])) 
        {
            plaintext[i] = (plaintext[i] - 'a' + key) % 26 + 'a';
        }
        // print encrypted plaintext
        printf("%c", plaintext[i]); 
    }
    printf("\n");
    return 0;
}
