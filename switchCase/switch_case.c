// Write a C program using switch case to print the day of the week based on the number entered (1 for Monday, 2 for Tuesday, … 7 for Sunday).

/*
#include <stdio.h>

int main()
{
    int d;

    printf("Enter number. \n");
    scanf("%d", &d);

    switch(d)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Enter invalid day.");
    }
}
*/

// Write a C program to create a simple calculator using switch case. The program should take two numbers and an operator (+, -, *, /) as input and display the result.

/*
#include <stdio.h>

int main()
{
    char x;
    int a, b;

    printf("Enter what you want. \n");
    scanf("%c", &x);

    printf("Enter value of a. \n");
    scanf("%d", &a);

    printf("Enter value of b. \n");
    scanf("%d", &b);

    switch (x)
    {
    case '+':
        printf("The sum of %d and %d is %d",a, b, a + b);
        break;

    case '-':
        printf("The sub of %d and %d is %d",a, b, a - b);
        break;

    case '*':
        printf("The mul of %d and %d is %d",a, b, a * b);
        break;

    case '/':
        printf("The div of %d and %d is %d",a, b, a / b);
        break;

    default:
        printf("Character is invalid.");
        break;
    }
}
*/

// Write a C program using switch case to display the number of days in a given month (1–12). Consider February as having 28 or 29 days. For invalid month numbers, display “Invalid Month”.

/*
#include <stdio.h>

int main()
{
    int m;

    printf("Enter month number. \n");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
        printf("January");
        break;

    case 2:
        printf("February");
        break;

    case 3:
        printf("March");
        break;

    case 4:
        printf("April");
        break;

    case 5:
        printf("May");
        break;

    case 6:
        printf("June");
        break;

    case 7:
        printf("July");
        break;

    case 8:
        printf("August");
        break;

    case 9:
        printf("September");
        break;

    case 10:
        printf("October");
        break;

    case 11:
        printf("November");
        break;

    case 12:
        printf("December");
        break;

    default:
        printf("Enter invalid month.");
    }
}
*/

// 	4.	Write a C program using switch case to print “Hello”, “Welcome”, or “Goodbye” based on a user’s choice.
// 	•	1 → Hello
// 	•	2 → Welcome
// 	•	3 → Goodbye
// For any other number, display “Invalid choice”.

/*
#include <stdio.h>

int main()
{
    int userChoise;

    printf("Enter yourChoise. \n");
    scanf("%d", &userChoise);

    switch(userChoise)
    {
        case 1:
        printf("Hello \n");
        break;

        case 2:
        printf("Welcome \n");
        break;

        case 3:
        printf("GoodBye \n");
        break;

        default:
        printf("Invalid choice");
        break;
    }
}
*/

// Write a C program using switch case to check whether a given character is a vowel or consonant. For non-alphabet characters, display “Invalid Input”.

#include <stdio.h>

int main()
{
    char character;

    printf("Enter any character \n");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z')
    {
        switch (character)
        {
        case 'a':
            printf("Character is vowel.");
            break;
        case 'e':
            printf("Character is vowel.");
            break;
        case 'i':
            printf("Character is vowel.");
            break;
        case 'o':
            printf("Character is vowel.");
            break;
        case 'u':
            printf("Character is vowel.");
            break;

        default:
            printf("constant value.");
            break;
        }
    }
    else
    {
        printf("Invalid input.");
    }
}
