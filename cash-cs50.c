#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change ;      // change need to be paid
    int cents ;         // dollars after converted to cents
    int coins  = 0;         // coins counter
    do
    {
        change = get_float("Change: ");
    }
    while (change < 0 || change == 0);
    cents = round(change * 100);
    while (cents >= 25)    // keep track of quarters
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10)    // keep track of dimes
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)    // keep track of nickels
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)    // keep track of pennies
    {
        cents -= 1;
        coins++;
    }
    printf("%i\n", coins);    // print the number of coins needed

}
