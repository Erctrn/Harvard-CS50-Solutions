#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, width, row, column;
    do
    {
        printf("How many blocks high should the half-pyramid to be? Height: ");
        height = get_int(); 
    }
    while (height < 0 || height > 23); 
    width = height + 1; 
                       
    for (row = 1; row <= height; row++)
    {
       for (column = 1; column <= width; column++)
        {    
            if (column <= width - (row + 1))
                printf(" ");
            
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}
