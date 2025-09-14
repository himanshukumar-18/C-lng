// we simplify variable names to match their data type (myInt or myNum for int types, myChar for char types, and so on). This is done to avoid confusion.

// store data
#include <stdio.h>

char fullName[] = "Rahul Sharma";
int studentId = 155;
int studentAge = 19;
float studentFee = 19.5;
char studentGrade = 'B';

// print variables
int main()
{
    printf("Student fullName: %s\n", fullName);
    printf("Student studentId: %d\n", studentId);
    printf("Student studentAge: %d\n", studentAge);
    printf("Student studentFee: %f\n", studentFee);
    printf("Student studentGrade: %c\n", studentGrade);
}