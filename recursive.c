#include <cs50.h>
#include <stdio.h>

long long fact(int); // declaration, you dont need a variable here
                // you can declare a function anywhere, but you cant call before you declare
long long fib(int);

long long expo(int);

int main(void)
{
    // 5!
    long long result = fact(5); // long long for large numbers, instead of int
    printf("5! = %lld\n", result);  // change i to lli
    long long result2 = fib(8);
    printf("8th position is: %lld\n", result2);

    long long result3 = expo(2 ^ 3);
    printf("The exponent is: %lld\n", result3);
}
long long fib (int num)
{
    //if (num == 1 || num == 0)
    if (num <= 1)
    {
        return num;
    }
    return fib(num - 1) + fib(num - 2);
}
long long fact(int num)
{
    // base case
    if(num <= 1)
    {
        return num;  // if num is equal to 0, return 0 || if num us equal to 1, return 1
    }
    return num * fact(num - 1);  // you dont need an else
}
long long expo(int x, int y)
{
    // base case
    if(x <= 1 || y <= 1)
    {
        return x;
    }
    return x ^ y = y * expo(x - 1);
}

//x ^ y = y * y ^ x - 1