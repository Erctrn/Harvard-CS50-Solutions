/*
Eric T.
cs50
initials.c
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string(); // get name string from user
    if (name != NULL) // if string isn't NULL, then proceed
    
    printf("%c", toupper(name[0])); // prints uppercase of first letter
    {
        for (int i = 0, n = strlen(name); i < n; i++) // loop through rest of input
        {
            if (isspace(name[i])) // checks for spaces
            {
                printf("%c", toupper(name[i + 1])); //prints the other initial
            }
        }
    }
    
    printf("\n"); // new line after initials are printed
    return 0;
}