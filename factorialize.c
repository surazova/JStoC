#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

long long factorialize(int);

int main(int argc, string argv[])
{
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("Put in a command line argument!\n");
        return 1;
    }
    int arg = atoi(argv[1]);
    long long result = factorialize(arg);
    printf("%lli\n", result);
}

long long factorialize(int fact)
{
    if (fact == 0 || fact == 1)
        return 1;
    else if (fact < 0)
        return -1;
    else
        return (fact * factorialize(fact - 1));
}