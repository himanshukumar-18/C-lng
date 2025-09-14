/*
Data Type	Size
int	        2 or 4 bytes
float	    4 bytes
double	    8 bytes
char	    1 byte
*/


// To actually get the size (in bytes) of a data type or variable, use the sizeof operator:

//example:
#include <stdio.h>
int main()
{
    int myInt;
    float myfloat;
    double myDouble;
    char myChar;
    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myfloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));
}

