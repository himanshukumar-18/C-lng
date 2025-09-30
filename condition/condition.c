// calculate percantage.

/*
#include <stdio.h>

int main()
{
    int science, math, english, hindi, sst;

    printf("Enter your science marks: ");
    scanf("%d", &science);

    printf("Enter your math marks: ");
    scanf("%d", &math);

    printf("Enter your english marks: ");
    scanf("%d", &english);

    printf("Enter your hindi marks: ");
    scanf("%d", &hindi);

    printf("Enter your sst marks: ");
    scanf("%d", &sst);

    float percentage = (science + math + english + hindi + sst) / 5.0;
    printf("Total percentage = %.2f \n", percentage);

    if (percentage >= 90)
    {
        printf("Your grade is A+\n");
    }
    else if (percentage >= 80)
    {
        printf("Your grade is A\n");
    }
    else if (percentage >= 70)
    {
        printf("Your grade is B+\n");
    }
    else if (percentage >= 60)
    {
        printf("Your grade is B\n");
    }
    else if (percentage >= 50)
    {
        printf("Your grade is C\n");
    }
    else if (percentage >= 40)
    {
        printf("Your grade is D\n");
    }
    else
    {
        printf("You are fail\n");
    }

    return 0;
}
*/







// leap year check
/*
#include <stdio.h>

int main()
{
    int year;

    printf("Enter checking year!? ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year!!", year);
    }

    return 0;
}
*/







// bill check

/*
#include <stdio.h>

int main()
{
    int unit, bill_1, bill_2, bill_3, total_bill;

    printf("Enter unit : ");
    scanf("%d", &unit);

    if (unit < 200)
    {
        bill_1 = unit * 1.50;
    }
    else if (unit > 200 && unit <= 400)
    {
        bill_2 = unit * 2;
    }
    else if (unit > 400)
    {
        bill_3 = unit * 3;
    }

    total_bill = bill_1 + bill_2 + bill_3;

    printf("Total = %d", total_bill);

    return 0;
}
*/






// check even or odd

/*
#include <stdio.h>

int main()
{
    int number;

    printf("Enter any number : ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is a even number.", number);
    }
    else
    {
        printf("%d is a odd number", number);
    }

    return 0;
}
*/






// largest of two numbers
/*
#include <stdio.h>


int main()
{
    int num_1, num_2;

    printf("Enter two number : ");
    scanf("%d %d", &num_1, &num_2);

    if (num_1 > num_2)
    {
        printf("%d is largest number. \n", num_1);
    }
    else if (num_2 > num_1)
    {
        printf("%d is largest number. \n", num_2);
    }
    else
    {
        printf("Both are equal numbers. \n");
    }

    return 0;
}
*/





// largest of three numbers
/*
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("%d is the largest number.\n", num2);
    }
    else
    {
        printf("%d is the largest number.\n", num3);
    }

    return 0;
}
*/





// check +tive -tive and 0.
/*
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("%d is a negative number.\n", number);
    }
    else if (number > 0)
    {
        printf("%d is a positive number.\n", number);
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}
*/





// check vowel and consonant.
/*
#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' ||
        alphabet == 'i' || alphabet == 'o' ||
        alphabet == 'u')
    {
        printf("%c is a vowel.\n", alphabet);
    }
    else
    {
        printf("%c is a consonant.\n", alphabet);
    }

    return 0;
}
*/






// check character type
/*
#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("'%c' is an alphabet.\n", c);
    }
    else if (c >= '0' && c <= '9')
    {
        printf("'%c' is a digit.\n", c);
    }
    else
    {
        printf("'%c' is a special character.\n", c);
    }

    return 0;
}
*/