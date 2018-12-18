// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>

// Driver program
int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run

    for(int i = 0; i<5; i++)
        printf(" %d ", rand());
    return 0;
}


Create the following functions
void random() // you need to add the correct parameters

void randomArray() // take an int array as an agument and assign each element a random number.