#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("How much change do I owe you? $");
    float change = get_float();
    int quartercount = 0, dimecount = 0, nickelcount = 0, pennycount = 0, coincount = 0, cents;

    while (change < 0)
    {
        printf("How much change do I owe you?\n");
        change = get_float();
        printf("%f\n", change);
    }
    
    if(change >= 0)
    {
        cents = (int)round(change * 100.0); //converts input into cents

        while (cents >= 25)
        {
            quartercount ++;
            cents -= 25;
        }
        while (cents >= 10)
        {
            dimecount ++;
            cents -= 10;
        }
        while (cents >= 5)
        {
            nickelcount ++;
            cents -= 5;
        }
        while (cents >= 1)
        {
            pennycount ++;
            cents -= 1;
        }
        coincount = (quartercount + dimecount + nickelcount + pennycount);
        printf("%d\n", coincount);
        //prettier print:
        //printf("Sorry, but we're out of cash, here are some coins instead. \n");
        //printf("The amount of coins returned are: %d \n", coincount);
        //printf("Coins returned: %d quarter(s), %d dime(s), %d nickel(s), and %d penny(ies). \n", quartercount, dimecount, nickelcount, pennycount);
    }
   else
    {
       //printf("Change must be a positive amount \n");
    }
    return 0;
}