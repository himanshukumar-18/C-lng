// functions

// create a function

#include <stdio.h>
#include <string.h>
#include <math.h>

/*

void myFn()
{
    printf("Hello\n");
}

void sumOfTwoNo()
{
    int num1 = 5;
    int num2 = 4;
    int sum = num1 + num2;

    printf("%d\n", sum);
}

// parameters
void fullName(char name[])
{
    printf("My name is %s\n", name);
}

// sum of two no
void sum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("The sum of %d and %d is %d", num1, num2, sum);
}*/

/*
int factorial(int n);

int main()
{
    printf("Factorial of 5 is : %d", factorial(5));
    return 0;
}

int factorial(int n) {
    if(n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}*/

/*
int x = 5;

int main()
{
    printf("%d", x);
}*/

// function decleration

/*
void print();

int sum(int x, int y);

int main()
{
    print();
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}

void print()
{
    printf("hello!");
    int result = sum(55, 10);
    printf("\nsum = %d", result);
}
*/

// round a number
/*
int main()
{
    printf("%f\n", ceil(1.1));
    printf("%f\n", floor(1.8));
    printf("%f\n", sqrt(16));
}*/

// inline function
/*
static inline int square(int x)
{
    return x * x;
}

int main()
{
    printf("square = %d", square(7));
    return 0;
}*/

// recursion self call
/*
int factor(int x);
int countDown(int n);

int main()
{
    printf("%d", factor(3));
    printf("%d", countDown(5));
    return 0;
}

int factor(int x)
{
    if (x > 0)
    {
        return x * factor(x - 1);
    }
    else
    {
        return 1;
    }
}

int countDown(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        countDown(n - 1);
    }

    return 0;
}*/

// function pointer. A function pointer is like a normal pointer, but instead of pointing to a variable, it points to a function.

// ex :
/*
int add(int a, int b) {
    return a + b;
}

void morning() { printf("Good Morning!!\n"); }
void evening() { printf("Good evening!!\n"); }

void greet(void (*fun)()) {
    fun();
}

int main()
{
    int (*sum)(int, int) = add;
    int result = sum(5, 5);
    greet(morning);
    greet(evening);
    printf("sum = %d", result);
    return 0;
}*/

// call back function
/*
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int numbers[] = {5, 2, 9, 1, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    qsort(numbers, size, sizeof(int), compare);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}*/

// fibonacci series

/*
int fibonacci(int n) {
    if(n <= 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Fibonacci series: \n");
    for(i = 0; i < n; i++) {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}*/

// swap to no.
int swap(int a, int b)
{
    int prev = a;

    printf("\nBefore swaping a = %d, b = %d\n", a, b);

    a = b;
    b = prev;

    printf("After swaping a = %d, b = %d", a, prev);

    return 0;
}

// sum of three digit.

int sum(int x, int y, int z)
{
    return x + y + z;
}

//srq.
int square(int n)
{
    return pow(n, 2);
}

int main()
{
    swap(8, 4);

    int sumOfThreeNo = sum(4, 5, 7);
    printf("\nSum of three digit = %d", sumOfThreeNo);

    int srq = square(5);
    printf("\nSquare of given no = %d", srq);
}
