#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You are under 18. You are not eligible to vote!!");
    } else if (age >=18 && age <= 80)
    {
        printf("You are eligible to vote");
    } else {
          printf("Your age was not correct!!");
    }
}