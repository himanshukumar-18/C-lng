/* Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value. */

// A format specifier starts with a percentage sign %, followed by a character.

// examples

#include <stdio.h>

// int myFavNum = 18;

// int main()
// {
//     printf("My fav num is %d", myFavNum);
// }

int myNum = 18;
char myLetter = 'H';

int main()
{
    printf("My number is %d and my letter is %c", myNum, myLetter);
}