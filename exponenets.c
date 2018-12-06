// Recursive
#include <cs50.h>
#include <stdio.h>

int expo(int, int);

int main (void)
{
    int n, p;
    n = get_int("Number: ");
    do
    {
        p = get_int("%ind power: ", n);
    }
    while (p < 0);


    int result = expo(n, p);
    printf("Result: %i\n", result);

}

int expo(int num, int power)
{
    // base case
    if (power == 0)
        return 1;
    else if (power == 1)
        return num;
    // recursive case
    else
    {
        return (num * (expo(num, (power - 1))));
    }

}
