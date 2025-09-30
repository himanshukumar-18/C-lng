// Area of a rectangle.

// #include <stdio.h>
// int main()
// {
//     int area, length, width;
//     length = 5;
//     width = 8;

//     area = length * width;
//     printf("Area of rectangle is: %d", area);
// }

// ⁠⁠Perimeter of a rectangle.
// #include <stdio.h>
// int main()
// {
//     int perimeter, length, width;
//     length = 5;
//     width = 7;

//     perimeter = 2 * (width + length);
//     printf("⁠⁠Perimeter of a rectangle: %d", perimeter);
// }

// ⁠⁠Area of a square.
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int area = 4;

//     area = pow(area, 2);
//     printf("⁠⁠⁠⁠Area of a square: %d", area);
// }

// Perimeter of a square.
// #include <stdio.h>
// int main()
// {
//     int area, perimeter;
//     area = 10;
//     perimeter = 4 * area;
//     printf("⁠⁠⁠Perimeter of a square: %d", perimeter);
// }

// Area of a circle.
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double pi, r, area;
//     pi = 3.14;
//     r = 5;

//     area = pi * (pow(r, 2));

//     printf("Area of a circle: %f", area);

// }

// Circumference of a circle.
// #include <stdio.h>
// int main()
// {
//     double pi, r, circumference;
//     pi = 3.14;
//     r = 5;

//     circumference = 2 * pi * r;

//     printf("Circumference of a circle is: %f", circumference);
// }

// Area of a triangle.
// #include <stdio.h>
// int main()
// {
//     int area, h, b;
//     h = 5;
//     b = 2;

//     area = (h * b)/2;

//     printf("Area of a triangle: %d", area);
// }

// Simple Interest.
// #include <stdio.h>
// int main()
// {
//     double p, r, t, si;
//     p = 5000;
//     r = 100;
//     t = 5;

//     si = (p * r * t) / 100;

//     printf("Simple Interest: %f", si);
// }

// Compound Interest.
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double amount, p, t, r, n;

//     p = 5000;
//     r = 0.05;
//     n = 12;
//     t = 2;

//     amount = p * pow((1 + r / n), n * t);

//     printf("Final Amount = %.2f\n", amount);

//     return 0;
// }

// Calculate percentage.
// #include <stdio.h>

// int main()
// {
//     int sub1, sub2, total;

//     sub1 = 23;
//     sub2 = 50;

//     total = (sub1 + sub2) / 2;

//     printf("Total = %d\n", total);
// }

// Find factors of a number.
// #include <stdio.h>

// int main()
// {
//     int number, i;

//     number = 10;

//     printf("factors of %d are : \n", number);
//     for (i = 1; i <= number; i++)
//     {
//         if (number % i == 0)
//         {
//             printf("%d \n", i);
//         }
//     }
//     printf("\n");
// }

// Find HCF of two numbers.

// #include <stdio.h>

// int main()
// {
//     int x, y, hcf, i;

//     x = 10;
//     y = 2;

//     for (i = 1; i <= x && i <= y; i++)
//     {
//         if (x % i == 0 && y % i == 0)
//         {
//             hcf = i;
//         }
//     }

//     printf("HCF of %d and %d is: %d \n", x, y, hcf);
// }

// Find LCM of two numbers.

// #include <stdio.h>

// int main()
// {
//     int a, b, lcm, i, hcf;

//     a = 5;
//     b = 10;

//     for (i = 0; i <= a && i <= b; i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             hcf = i;
//         }
//     }
//     lcm = (a * b) / hcf;

//     printf("LCM of %d and %d is %d\n", a, b, lcm);
// }

// Sum of first n natural numbers.

// #include <stdio.h>

// int main()
// {
//     int naturalNum, sum = 0, i;

//     naturalNum = 3;

//     for (i = 1; i <= naturalNum; i++)
//     {
//         sum += i;
//     }

//     printf("Sum of first %d natural numbers is: %d\n", naturalNum, sum);
// }

// Sum of square first n natural numbers.

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int naturalNum, sqr, sum = 0, i;

//     naturalNum = 2;

//     for (i = 1; i <= naturalNum; i++)
//     {
//         sqr = pow(i, 2);
//         sum += sqr;
//     }

//     printf("Sum of first %d natural numbers is: %d\n", naturalNum, sum);
// }

// Sum of square first n natural numbers.

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int naturalNum, sqr, sum = 0, i;

//     naturalNum = 2;

//     for (i = 1; i <= naturalNum; i++)
//     {
//         sqr = pow(i, 3);
//         sum += sqr;
//     }

//     printf("Sum of first %d natural numbers is: %d\n", naturalNum, sum);
// }




#include <stdio.h>

int main()
{
    int x, y, output;

    x = 8;
    y = 3;

    output = (x * x) + (2 * x * y) + (y * y);

    printf("Output = %d\n", output);
}
