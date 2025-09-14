// The char data type is used to store a single character.

// The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it:

// Example
/* #include <stdio.h>
int main()
{
    char myNameFirstLetterIs = 'H';
    printf("My name first letter is %c", myNameFirstLetterIs);
} */



// Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters. Note that these values are not surrounded by quotes (''), as they are numbers:

// Example
/*
#include <stdio.h>
int main()
{
    char a = 5, b = 10, c = 13;
    printf("This all are my fav number %c %c %c", a, b, c);
}
*/

// Note: Don't use the char type for storing multiple characters, as it may produce errors.

// To store multiple characters (or whole words), use strings.

// example:
#include <stdio.h>
int main()
{
    char myFullName[] = "Himanshu Kumar";
    printf("My fullname is %s", myFullName);
}