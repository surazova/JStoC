// Non-recursive
#include <cs50.h>
#include <stdio.h>

int expo(int, int);

int main (void)
{
    int n, p;
    n = get_int("Number: ");
    do
    {
        p = get_int("%i raised to: ", n);
    }
    while (p < 0);

    int result = expo(n, p);
    printf("Result: %i\n", result);
}


int expo(int num, int power)
{
    int result = 1;
    if (power == 0)
        return 1;
    else if (power == 1)
        return num;
    else
    {

        for (int i = 0; i < power; i++ )
           result *= num;
    }

    return result;
}