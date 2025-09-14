// Find area of circlw\e in c programm
// Formula pi * r * r 

#include <stdio.h>
int main()
{
    float pi = 3.14;
    float r;
    printf("Enter the value of r :");
    scanf("%f", &r);

    float area = pi * r * r;
    printf("The area circle is : %f", area);
}