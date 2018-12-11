//#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char* name= "Sitora";
    // since name is not in brackets, you are not telling the computer the length of the string, the computer knows how long the string is when you see a "\0", like a reference point
    // name is therefore not an array
    printf("%s\n", name);
    //print name backwards
    for (int i = strlen(name) -1; i >= 0; i--)  // counts from right to left and then goes backwards
    {
        printf("%c", name[i]);

    }
        printf("\n");
}

// print your name backwards