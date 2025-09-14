// Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.

// int
/*
#include <stdio.h>
int main()
{
    int myNum = 18;
    printf("My fav number is %d", myNum);
}
*/

// float
/*
#include <stdio.h>
int main()
{
    float myNum = 19.55;
    printf("%f", myNum);
}
*/

// double
/*
#include <stdio.h>
int main()
{
    double myNum = 55.5;
    printf("%lf", myNum);
}
*/

/*
In C, you can write very large or very small floating-point numbers using scientific notation.

This is done using the letter e (or E), which stands for "times 10 to the power of".

For example, 35e3 means 35 × 10³ = 35000.

This is useful for writing numbers in a shorter way. Especially when working with scientific values or large-scale data.
*/

// example:
/*
#include <stdio.h>
int main()
{
    float f1 = 3e3; // 3 * 10^3
    double f2 = 50e5; // 50 * 10^5
    printf("Total is: %f %lf", f1, f2);
}
*/

// decimal numbers
// You have probably already noticed that if you print a floating point number, the output will show many digits after the decimal point:

// If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

// example:
/*
#include <stdio.h>
int main()
{
    float num1 = 20.5;
    double num2 = 50.77;
    printf("Total: %1.f \n %2.lf", num1, num2);
}
*/