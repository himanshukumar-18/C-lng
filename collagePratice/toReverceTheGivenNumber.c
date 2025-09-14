// To reverse the given number


// code
#include <stdio.h>
int main()
{
    int num, rem, rev = 0, sum = 0;
    printf("Give me any number i will reverse it.");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Here the reverse of your given num : %d \n And sum of all numbers : %d", rev, sum);
    
}

