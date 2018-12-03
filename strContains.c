#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// int main(void)
// {
//     // Main C string to be scanned
//     const char str[] = "TutorialsPoint";

//     // Small string to search for within main C string
//     const char str2[] = "Point";
//     char *ret;

//     ret = strstr(str, str2);

//     printf("The substring is: %s\n", ret);

//     return 0;
// }

// int main(void)
// {
//     string message = get_string("First input: ");
//     string messageTwo = get_string("Second input: ");

//     char *ret;

//     ret = strstr(message, messageTwo);

//     printf("The substring is: %s\n", ret);

//     return 0;
// }


//Another solution

// int strContains(string, string);

// int main(void)
// {
//     string message = get_string("First Input: ");
//     string messageTwo = get_string("Second Input: ");

//     int result = strContains(message, messageTwo);
// }

// int strContains(string1, string2)
// {
//     int count = 0;
//     int numOccur = 0;
//     int j;
//     int length = strlen(message);
//     int subLength = strlen(messageTwo);
//     for (int i = 0; i < length;)
//     {
//         j = 0;
//         count = 0;

//         while(message[i] == messageTwo[j])
//         {
//             count++;
//             i++;
//             j++;
//         }
//         if (count == subLength)
//         {
//             numOccur++;
//             count = 0;
//         }
//         else
//         i++;
//     }

//     if (numOccur > 1)
//     {
//         printf("This string contains the word\n");
//         return 2;
//     }

//     else if (numOccur == 1)
//     {
//         printf("This string exists\n");
//         return 1;
//     }

//     else
//     {
//         printf("This string does not exist\n");
//         return 0;
//     }
// }