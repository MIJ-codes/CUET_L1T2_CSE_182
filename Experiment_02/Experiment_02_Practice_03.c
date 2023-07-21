// A program to convert centimeter into meter and kilo meter

#include <stdio.h>

void main ( )
{
    float a,b,c;

    printf ("Enter the length in centimeters:\n");
    scanf ("%f",&a);

    b = a/100;
    c = a/100000;

    printf ("The length is %f meters or %f kilo meters",b,c);
}
