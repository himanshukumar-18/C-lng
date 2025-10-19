// all loop problems.
#include <stdio.h>
#include <math.h>

// print table with loop.

/*
int main()
{
    int i, table;

    printf("Enter what table want you to print? \n");
    scanf("%d", &table);

    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", table, i, table * i);
    }

    return 0;
}*/

// print 5 star horizontal

/*
int main()
{
    int i;

    for(i = 1; i <= 5;  i++)
    {
        printf("* ");
    }

    return 0;
}*/

// print 5 star vertical.

/*
int main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        printf("* \n");
    }

    return 0;
}
*/

// print 5 star step by step.

/*
int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        switch (i)
        {
        case 1:
            printf("* \n");
            break;
        case 2:
            printf("* * \n");
            break;
        case 3:
            printf("* * * \n");
            break;
        case 4:
            printf("* * * * \n");
            break;
        case 5: 
            printf("* * * * * \n");
        }
    }

    return 0;
}
*/


/*
int main()
{
    int i, j;

    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/


/*
int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}*/

// find sum of n number.

/*
int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Total = %d", sum);

    return 0;
}
*/

/*
int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n \n");
    scanf("%d", &n);

    while(i <= n) {
        sum = sum + i;
        i++;
    }

    printf("Total = %d", sum);

    return 0;
}*/



// Wap to find square of sum n number.

int main()
{
    int n, i = 1, sqr, sum = 0;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    while(i <= n) {
        sqr = pow(i, 2);
        sum = sqr + sum;
        i++;
    }

    printf("Total = %d", sum);

    return 0;
}