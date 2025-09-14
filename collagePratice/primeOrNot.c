// To check number is prime or not.
// Algrothim
// 1. start
// 2. request input value from user num.
// 3. if(num <= 1) not a prime number
// 4. loop
// 5. print output
// 6. end

// code
#include <stdio.h>
int main()
{
    int num, i;
    printf("Give me some number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Not a prime number.");
        return 0;
    }

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("Not a prime number;");
            return 0;
        }
    }

    printf("Yes, it is prime number");
    return 0;
}