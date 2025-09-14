// sum of two nos. where the numbers are taken through the keyboard.

#include <stdio.h>
int main()
{
    int no_1, no_2, sum;
    //no1 
    printf("Give First Numbers:");
    scanf("%d", &no_1);

    //no2
    printf("Give Secound Numbers:");
    scanf("%d", &no_2);


    sum = no_1 + no_2;
    printf("Sum of two no is: %d", sum);
}