#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int sumFibs(int);

int main(int argc, string argv[])
{
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf("Put in a command line argument!\n");
        return 1;
    }
    int num = atoi(argv[1]);
    int result = sumFibs(num);
    printf("%d\n", result);
}

int sumFibs(num)
{
    int first = 1;
    int second = 1;
    int third = 0;
    int result = 2;

    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;

    for (; third <= num;)
    {
        if (third % 2 != 0)
            result += third;

        third = first + second;
        first = second;
        second = third;
    }
    return result;
}