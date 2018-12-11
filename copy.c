#include <stdio.h>

void copy(int*, int*);
void changeArray(int[]);

int main (void)
{
    int num1 = 5;
    int num2 = 10;
    printf("5 + 10 = %i\n", num1 + num2);
    copy(&num1, &num2); // & to send the address, or the reference to the item, not the value (you are changing the main stack)
    printf("%i + %i = %i\n", num1, num2, num1 + num2);
    //int arr[5] = { 6, 4, 18, 2, 59}
    //printf("arr[2]: %i\n", arr[2]);
    //changeArray(arr);
    //printf("arr[2]: %i\n", arr[2]);
}

void changeArray (int theArray[])
{
    theArray[2] = 30;

}

void copy(int* x, int* y) // go to the address (or the reference)
{
    //printf("DEBUG\n");
    *y = *x;  // go to the address and modify what is there
}

