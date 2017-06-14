#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes does it take for you to shower? ");
    int minutes = get_int();
    
    if (minutes > 0)
    {
        int bottles = minutes * 12;
        printf("Minutes: %i\n", minutes);
        printf("Bottles: %i\n", bottles); 
    }
    else
    {
        printf("Minutes must be an integer ");
    }
}

