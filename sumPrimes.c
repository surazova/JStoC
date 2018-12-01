#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkPrime(int);
int sumPrimes(int);

int main(int argc, string argv[])
{
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("Put in a command line argument!\n");
        return 1;
    }

    int arg = atoi(argv[1]);
    int result = sumPrimes(arg);
    printf("%i\n", result);
}

int checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (!(num % i))
            return false;
    }

    return true;
}

int sumPrimes(int num)
{
    int sum = 0;

    for (int i = 2; i <= num; i++)
    {
        if(checkPrime(i))
            sum += i;
    }

    return sum;
}