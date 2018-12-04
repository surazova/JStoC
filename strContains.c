#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Get two strings from the user
    char *message = get_string("First input: ");
    char *message2 = get_string("Second input: ");

    // if the substring exists in the main string
    if (strstr(message, message2))
    {
        printf("1 true\n");
        return 1;

    }
    //If the substring is not in the mains string
    else
    {
        printf("0 false\n");
        //return 1;
    }
    return 0;

}