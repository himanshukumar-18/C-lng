// To check odd or even
// Algorithm -
// 1. start.
// 2. Take at input num from user.
// 3  To divide num/2.
// 4. if(num === 0) Even;
// 5. else Odd.
// 6. End

// Code
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Even!");
    }
    else
    {
        printf("Odd!");
    };
}