/*

// typeOf.

#include <stdio.h>

// typedef char Name;


typedef struct {
    char brand[50];
    char model[50];
    int year;
} Car;

typedef struct {
    char FirstName[50];
    char LastName[50];
} StudentFullName ;

typedef struct {
    char Course[20];
    int AddmissionYear;
} CourseDetails ;

typedef struct {
    StudentFullName FullName;
    int StudentIdNo;
    char Gender[10];
    CourseDetails Course;
} StudentFullDetails;

int main()
{
    
    Name std1[50] = "Himanshu";
    Name std2[50] = "Golu";
    printf("Name  student 1 = %s\n", std1);
    printf("Name  student 2 = %s\n", std2);*/

    /*Car car1 = {"Honda", "i10", 2025};
    printf("%s, %s, %d", car1.brand, car1.model, car1.year);

    StudentFullName s1 = {"Himanshu", "Kumar"};
    CourseDetails s1c = { "BCA 'A'", 2025 };
    StudentFullDetails d = {s1, 105, "Male", s1c };

    printf("%s %s\n %d\n %s\n %s\n %d", 
        d.FullName.FirstName,
        d.FullName.LastName,
        d.StudentIdNo,
        d.Gender,
        d.Course.Course,
        d.Course.AddmissionYear
    );

    return 0;
}
*/
#include<stdio.h>
int sum(int *, int *);

int main()
{
    int a,b;
    printf("Enter the two nos");
    scanf("%d%d",&a,&b);
    sum(&a,&b);
}
int sum(int *p, int *q)
{
    int s=0;
    s=*p+*q;
    printf("\nSum of two nos=%d",s);
}

