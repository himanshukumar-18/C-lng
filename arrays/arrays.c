// arrays

#include <stdio.h>
#include <string.h>

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

/*
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

}*/

// leet code
/*
int main()
{
    int num1[] = {1, 2, 3, 0, 0, 0};
    int num2[] = {2, 5, 6};

    int output[] = {num1[0], num1[1], num2[0], num1[2], num2[1], num2[2]};

    int elements = sizeof(output) / sizeof(output[0]);
    int i;

    for(i = 0; i < elements; i++) {
        printf("%d ", output[i]);
    }
}*/

// array total sub marks score.
/*
int main()
{
    int marks[5], i, total = 0;
    float percentage;

    printf("Enter all sub marks. \n");

    for(i = 0; i <= 4; i++) {
        printf("Enter marks: \n");
        scanf("%d", &marks[i]);
    }

    printf("Output \n");

    for(i = 0; i <= 4; i++) {
        printf("Sub[%d] = %d \n", i+1, marks[i]);
        total += marks[i];
    }

    percentage = total/5;

    printf("total marks = %d \n", total);
    printf("Avg = %.2f \n", percentage);

    return 0;
}*/

/*
int main()
{
    char yourName[50];
    int i, total_word;

    printf("Enter total letter of your name:  ");
    scanf("%d", &total_word);

    printf("Enter your name (no space): ");
    scanf("%s", yourName);

    for(i = 0; i < total_word; i++) {
        printf("Word[%d] = %c\n", i+1, yourName[i]);
    }

    return 0;
}*/

/*
int main()
{
    char yourName[50] = "Himanshu Kumar";
    int i;

    for(i = 0; yourName[i] != '\0'; i++) {

        if(yourName[i] == ' ') {
            printf("space at index %d", i);
        }
    }

    return 0;
}*/

// Multidimensional Arrays

/*
int main()
{
    int num[10][10] = {{ 22, 88, 99 }, { 5, 9, 7 }};

    printf("%d", num[0][2]);

    return 0;
}*/

// try in loop
/*
int main()
{
    int matrix[2][3] = { { 99, 57, 45 }, { 76, 90, 34 }, };
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }
}*/

/*
int main()
{
    int a[5], i, sum = 0;

    for(i = 0; i <= 4; i++)
    {
        printf("Enter elements : ");
        scanf("%d", &a[i]);
    }

    for(i = 0; i <= 4; i++)
    {
        printf("%d\n", a[i]);
    }

    // sum
    for(i = 0; i <= 4; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of all array elements are : %d", sum);
}*/

// larget element
/*
int main()
{
    int a[5], i, largest;

    for(i = 0; i <= 4; i++)
    {
        printf("Enter elements : ");
        scanf("%d", &a[i]);
    }

    largest = a[0];
    for(i = 0; i < 4; i++)
    {
        if (a[i] > a[0])
        {
            largest = a[i];
        }

    }

    printf("Largest element = %d", largest);
}*/

// using strcmp to compare two strings
/*
int main()
{
    char str1[50], str2[50];
    int result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    result = strcmp(str1, str2);

    if(result == 0) {
        printf("Both strings are equal.\n");
    } else if(result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}*/

// add 2 string lengths
/*
int main()
{
    char str1[50], str2[50];
    int len1, len2, totalLen;

    printf("Enter first string: ");
    scanf("%s", &str1);

    printf("Enter second string: ");
    scanf("%s", &str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    totalLen = len1 + len2;

    printf("Total length of both strings: %d\n", totalLen);

    return 0;
}*/

// copy one string to another
/*
int main()
{
    char source[50], destination[50];

    printf("Enter source string: ");
    scanf("%s", source);

    strcpy(destination, source);

    printf("Source String: %s\n", source);
    printf("Destination String: %s\n", destination);

    return 0;
}*/

// using strcat to concatenate two strings
/*
int main()
{
    char str1[100], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}*/

// 1D array elements.
/*
int main(void) {
    int arr1D[5];
    int i;

    for(i = 0; i < 5; i++) {
        arr1D[i] = i;
    }

    printf("Elements of 1D arr: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }

    return 0;
}*/

/*
int main(void) {
    int arr2D[2][3];
    int i, j;

    printf("Enter elements for array: \n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elements [%d][%d]: ", i, j);
            scanf("%d", &arr2D[i][j]);
        }
    }

    printf("\nElements of 2D arr: ");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr2D[i][j]);
        }
    }

    return 0;
}*/

/*
int main(void)
{
    int arr3D[2][2][2];
    int i, j, k;

    printf("Enter elements for array: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("Elements [%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr3D[i][j][k]);
            }
        }
    }

    printf("\nElements of 3D arr: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                printf("%d ", arr3D[i][j][k]);
            }
        }
    }

    return 0;
}*/



// sum of 0-50 elm.

int main() 
{
    int arr[51], i, sum = 0;

    for(i = 0; i < 51; i++)
    {
        arr[i] = i;
    }

    printf("Elements: ");
    for(i = 0; i < 51; i++)
    {
        printf("%d " , arr[i]);
        sum += arr[i];
    }

    printf("\nSum: %d", sum);

    return 0;
}