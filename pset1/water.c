#include <stdio.h>
#include <cs50.h>



int main(void)
{
    int minutes = get_int(); //geting user input
    
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", minutes * 12); //calculating equivalent bottles
}

