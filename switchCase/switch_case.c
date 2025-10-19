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

/*
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
*/

/*
write a C program using switch case to display a menu for basic mathematical operations and perform the selected operation.
Menu:
    Addition
    Subtraction
Multiplication
    Division
    Modulus

*/

/*
#include <stdio.h>

int main()
{
    int select, x, y, output;

    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulus \n");

    scanf("%d", &select);

    switch (select)
    {
    case 1:
        printf("You select Addition. \n");

        printf("Enter the value of x & y: \n");
        scanf("%d %d", &x, &y);

        output = x + y;
        printf("The addition of %d & %d = %d", x, y, output);

        break;
    case 2:
        printf("You select Subtraction. \n");

        printf("Enter the value of x & y: \n");
        scanf("%d %d", &x, &y);

        output = x - y;
        printf("The subtraction of %d & %d = %d", x, y, output);

        break;
    case 3:
        printf("You select Multiplication. \n");

        printf("Enter the value of x & y: \n");
        scanf("%d %d", &x, &y);

        output = x * y;
        printf("The multiplication of %d & %d = %d", x, y, output);

        break;
    case 4:
        printf("You select Division. \n");

        printf("Enter the value of x & y: \n");
        scanf("%d %d", &x, &y);

        output = x / y;
        printf("The division of %d & %d = %d", x, y, output);

        break;
    case 5:
        printf("You select Modulus. \n");

        printf("Enter the value of x & y: \n");
        scanf("%d %d", &x, &y);

        output = x % y;
        printf("The modulus of %d & %d = %d", x, y, output);

        break;
    }

    default:
        printf("Invalid choise.")
}
*/

// ⁠ ⁠Write a C program using switch case to convert temperature based on the user’s choice.
// Celsius to Fahrenheit
// 	Fahrenheit to Celsius

/*
#include <stdio.h>

int main()
{
    int userChoise;
    float celsius, fahrenheit, output;

    printf("1 for Celsius to Fahrenheit. \n");
    printf("2 for Fahrenheit to Celsius. \n");

    printf("What's your choise? \n");
    scanf("%d", &userChoise);

    switch (userChoise)
    {
    case 1:
        printf("Your choise is Celsius to Fahrenheit. \n");

        printf("Enter value of clesius \n");
        scanf("%f", &celsius);

        output = (celsius * 9 / 5) + 32;
        printf("Result = %2.fFahrenheit.", output);

        break;
    case 2:
        printf("Your choise is Fahrenheit to Clesius. \n");

        printf("Enter value of Fahrenheit \n");
        scanf("%f", &fahrenheit);

        output = (fahrenheit - 32) * 5 / 9;
        printf("Result = %2.fClesius.", output);

        break;
    default:
        printf("Invalid Choise. \n");
        break;
    }
}
*/

/*
Write a C program using switch case to display the grade of a student based on marks.

    •	90–100 → A+
    •	80–89 → A
    •	70–79 → B+
    •	60–69 → B
    •	50–59 → C
    •	33–49 → D
    •	Below 33 → Fail
*/

/*
#include <stdio.h>

int main()
{
    int hindi, math, english, science, computer, total;
    int percentage, gradeRange;

    printf("Enter your subject numbers: \n");
    scanf("%d %d %d %d %d", &hindi, &math, &english, &science, &computer);

    total = hindi + math + english + science + computer;
    percentage = total / 5;

    printf("Your total is %d and your percentage is %d\n", total, percentage);

    gradeRange = percentage / 10;

    switch (gradeRange)
    {
    case 10:
    case 9:
        printf("Congratulations 😍 Your grade is A+.\n");
        break;
    case 8:
        printf("Your grade is A.\n");
        break;
    case 7:
        printf("Your grade is B.\n");
        break;
    case 6:
        printf("Your grade is C.\n");
        break;
    case 5:
        printf("Your grade is D.\n");
        break;
    default:
        printf("Your grade is F. 😢\n");
        break;
    }

    return 0;
}*/

/*
    Write a C program using switch case to perform unit conversion based on user choice.
    Kilometer to Meter
    Meter to Kilometer
    Celsius to Fahrenheit
    Fahrenheit to Celsius
    Hours to Minutes
*/

/*
#include <stdio.h>

int main()
{
    int userChoise;
    float c, f, km, m, h, output, min, hr;

    printf("1 for km to m. \n");
    printf("2 for m to km. \n");
    printf("3 for c to f. \n");
    printf("4 for f to c. \n");
    printf("5 for hr to min. \n");

    printf("What's your choise? \n");
    scanf("%d", &userChoise);

    switch (userChoise)
    {
    case 1:
        printf("Your choise is km to m. \n");

        printf("Enter value of km \n");
        scanf("%f", &km);

        output = km * 1000;
        printf("Result = %2.fmeter.", output);

        break;
    case 2:
        printf("Your choise is m to km. \n");

        printf("Enter value of m \n");
        scanf("%f", &m);

        output = m / 100;
        printf("Result = %2.fkilometer.", output);

        break;
    case 3:
        printf("Your choise is c to f. \n");

        printf("Enter value of c \n");
        scanf("%f", &c);

        output = (c * 9 / 5) + 32;
        printf("Result = %2.ff.", output);

        break;
    case 4:
        printf("Your choise is f to c. \n");

        printf("Enter value of f \n");
        scanf("%f", &c);

        output = (f - 32) * 5 / 9;
        printf("Result = %2.fc.", output);

        break;
    case 5:
        printf("Your choise is hr to min. \n");

        printf("Enter value of hr \n");
        scanf("%f", &hr);

        output = hr * 60;
        printf("Result = %2.fmin.", output);

        break;
    default:
        printf("Invalid Choise. \n");
        break;
    }
}
*/

/*
⁠Write a menu-driven program using switch case that allows a user to:
    Check Even or Odd
    Check Positive, Negative or Zero
    Find Square and Cube of a Number
    Exit
*/

#include <stdio.h>

int main()
{
    int choice;
    int num;

    printf("1. Check Even or Odd\n");
    printf("2. Check Positive, Negative or Zero\n");
    printf("3. Find Square and Cube of a Number\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number to check Even/Odd: ");

        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("%d is Even.\n", num);
        }
        else
        {
            printf("%d is Odd.\n", num);
        }
        break;

    case 2:
        printf("Enter a number to check Positive/Negative/Zero: ");

        scanf("%d", &num);

        if (num > 0)
        {
            printf("%d is Positive.\n", num);
        }
        else if (num < 0)
        {
            printf("%d is Negative.\n", num);
        }
        else
        {
            printf("The number is Zero.\n");
        }
        break;

    case 3:
        printf("Enter a number to find Square and Cube: ");

        scanf("%d", &num);

        printf("Square of %d = %d\n", num, num * num);
        printf("Cube of %d = %d\n", num, num * num * num);
        break;

    case 4:
        printf("Exiting the program.\n");
        break;
    default:
        printf("Invalid choice! Please try again.\n");
    }
}
