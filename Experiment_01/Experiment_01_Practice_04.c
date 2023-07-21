// A program to find the area and perimeter of a rectangle

#include <stdio.h>
// for some reason the math.h header file is not needed and I don't know why

main ( )
{
    float a,b,p,area;

    a = 5;
    b = 6;

    p = 2*(a+b);
    area = a*b;

    printf ("The perimeter of the rectangle is %f unit \nand area is %f square unit",p,area);
}
