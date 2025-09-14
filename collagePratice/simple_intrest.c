// calculate simple intrest 
#include <stdio.h>
int main()
{
    int p, r, t, simple_intrest;
    p = 5000;
    r = 500;
    t = 2;

    simple_intrest = (p * r * t)/100;
    printf("Simple intrest is: %d", simple_intrest);
}