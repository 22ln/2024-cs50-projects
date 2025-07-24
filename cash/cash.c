#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("change owed: ");
    }
    while (cents < 0);

    // calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);

    // subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    // calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);

    // subtract the value of those dimes from remaining cents
    cents = cents - (dimes * 10);

    // calculate how many nickels you should give customer
    int nickels = calculate_nickels(cents);

    // subtract the value of those nickels from remaining cents
    cents = cents - (nickels * 5);

    // calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);

    // subtract the value of those pennies from remaining cents
    cents = cents - (pennies * 1);

    // sum the number of quarters, dimes, nickels, and pennies used
    int total =
        quarters + dimes + nickels + pennies; // Declare and assign a value to total_coins
    printf("Total coins: %d\n", total);

    return 0;
}

int calculate_quarters(int cents)
{
    int i;
    for (i = 0; cents >= 25; i++)
    {
        cents = cents - 25;
    }
    return i;
}

int calculate_dimes(int cents)
{
    int i;
    for (i = 0; cents >= 10; i++)
    {
        cents = cents - 10;
    }
    return i;
}

int calculate_nickels(int cents)
{
    int i;
    for (i = 0; cents >= 5; i++)
    {
        cents = cents - 5;
    }
    return i;
}

int calculate_pennies(int cents)
{
    int i;
    for (i = 0; cents >= 1; i++)
    {
        cents = cents - 1;
    }
    return i;
}
