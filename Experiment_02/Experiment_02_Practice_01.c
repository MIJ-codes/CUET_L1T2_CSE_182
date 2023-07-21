// A program to find the area and perimeter of a rectangle

#include <stdio.h>

void main ( )
{
    float a,b,p,area;

    printf ("Enter the length and breadth of a rectangle:\n");
    scanf ("%f%f",&a,&b);

    p = 2*(a+b);
    area = a*b;

    printf ("The perimeter is %f unit and the area is %f square unit",p,area);

    // discussion: in the places of format specifier instead of %f, %d was added by mistake
}
