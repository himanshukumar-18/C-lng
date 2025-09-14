// If you assign a new value to an existing variable, it will overwrite the previous value

// examples

#include <stdio.h>

int myNum = 15;

// int main()
// {
//     myNum = 18;
//     printf("my number is %d", myNum);
// }

// You can also assign the value of one variable to another

char myNameIs[] = "Himanshu";
char mytitle[] = "Rana";

// int main()
// {
//     printf("My name is %s %s", myNameIs, mytitle);
//     return 0;
// }

// To add a variable to another variable, you can use the + operator:

int x = 5;
int y = 10;

int main()
{
    int sum = x + y;
    printf("the sum of x + y = %d", sum);
}
