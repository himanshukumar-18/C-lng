// arrays

#include <stdio.h>

/*
int main()
{
    int myNumber[5] = {
        10,
        12,
        15,
        20,
        70,
    };

    printf("My Array = %d", myNumber[2]);

    return 0;
}*/

// size of array

/*
int main()
{
    int myNumbers[] = { 101, 105, 108, 109, 200, 600 };
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // printf("%zu", sizeof(myNumbers));
    printf("%d", length);
}*/

// loop array

/*
int main()
{
    int myNum[] = { 506, 507, 508, 509, 600, 800, 400 };
    int length = sizeof(myNum) / sizeof(myNum[0]);
    int i;

    for(i = 0; i <= length; i++) {
        printf("%d\n", myNum[i]);
    }
}*/

// cal avg of diffrent age

/*
int main()

{
    int ages[] = { 20, 44, 55, 29, 10 };
    int length = sizeof(ages) / sizeof(ages[0]);
    int i = 0;
    float avg, sum = 0;

    for(; i < length; i++) {
        sum += ages[i];
    }

    printf("Total sum =  %.2f\n", sum);

    avg = sum / length;

    printf("The avrage age is = %.2f", avg);

    return 0;
}*/

/*
int main()

{
    int ages[] = { 20, 44, 55, 29, 10 };
    int length = sizeof(ages) / sizeof(ages[0]);
    int i = 0;

    int lowestAge = ages[0];

    for(; i < length; i++) {
        if(lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }

    printf("The lowest age is = %d", lowestAge);

    return 0;
}*/


int main()
{
    int myNumbers[] = { 5, 3, -6, 10 };
    int i;
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for(i = 0; i < length; i++) {
        if(myNumbers[i] < 0) {
            continue;
        }
        if(myNumbers[i] == 0) {
            break;
        }
        printf("%d\n", myNumbers[i]);
    }

}