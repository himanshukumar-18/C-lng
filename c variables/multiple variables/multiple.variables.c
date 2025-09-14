// To declare more than one variable of the same type, use a comma-separated list:

// examples
#include <stdio.h>

// int x = 5, y = 10, z = 50;

// int main()
// {
//     printf("All num: %d %d %d", x, y, z);
// }

// You can also assign the same value to multiple variables of the same type:

int x, y, z;

int main()
{
    x = y = z = 50;
    printf("Total: %d", x + y + z);
}