// If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

//example
#include <stdio.h>
int main()
{
    const int minutePerHour = 25;
    printf("%d", minutePerHour);
}

// When you declare a constant variable, it must be assigned with a value:
// example
// const int minutePerHour;
// minutePerHour = 30; // error

