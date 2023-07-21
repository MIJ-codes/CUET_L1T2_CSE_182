// A program to find the diameter, circumference, area of a circle

#include <stdio.h>

void main ( )
{
    float r,d,c,pi,area;

    printf ("Enter the radius of the circle:\n");
    scanf ("%f",&r);
    pi = 3.1416;

    d = 2*r;
    c = 2*pi*r;
    area = pi*r*r;

    printf ("The diameter of the circle is %f unit \nThe circumference is %f unit \nThe area is %f square unit",d,c,area);

    // for  some reason math.h is not needed and I don't know why
}
