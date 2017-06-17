#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("How much change do I owe you? $");
    float change = get_float();
    int quartercount = 0, dimecount = 0, nickelcount = 0, pennycount = 0, coincount = 0, cents;
    
    
    if(change > 0)
    {
        cents = (int)round(change * 100.0); //converts input into cents

        while (cents >= 25)
        {
            quartercount ++;
            coincount ++;
            cents -= 25;
        }
        while (cents >= 10)
        {
            dimecount ++;
            coincount ++;
            cents -= 10;
        }
        while (cents >= 5)
        {
            nickelcount ++;
            coincount ++;
            cents -= 5;
        }
        while (cents >= 1)
        {
            pennycount ++;
            coincount ++;
            cents -= 1;
        }//change coincount =quarter+dime+nickel+pennycount later
        
        printf("%d\n", coincount);
        //prettier print:
        //printf("Sorry, but we're out of cash, here are some coins instead. \n");
        //printf("The amount of coins returned are: %d \n", coincount);
        //printf("Coins returned: %d quarter(s), %d dime(s), %d nickel(s), and %d penny(ies). \n", quartercount, dimecount, nickelcount, pennycount);
   
    }
   else
    {
       printf("Change must be a positive amount \n");
    }
    return 0;
}

/*******************current check******************************
~/workspace/pset1/ $ check50 2016.greedy greedy.c
:) greedy.c exists
:) greedy.c compiles
:) input of 0.41 yields output of 4
:) input of 0.01 yields output of 1
:) input of 0.15 yields output of 2
:) input of 1.6 yields output of 7
:) input of 23 yields output of 92
:) input of 4.2 yields output of 18
:( rejects a negative input like -.1
   \ expected prompt for input, not exit code of 0
:) rejects a non-numeric input of "foo"
:) rejects a non-numeric input of ""
https://sandbox.cs50.net/checks/d14f4284203b44cca7d70be05e79b120
 *******************************************************************/
 