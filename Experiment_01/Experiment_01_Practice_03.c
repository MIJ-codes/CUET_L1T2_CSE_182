// A program to calculate the area and perimeter of a triangle

#include <stdio.h>
#include <math.h>

main ( )
{
    float a,b,c,p,s,area; // for discussion: here everything was declared as a float type variable because
    // in c programming integer/integer = integer and this integer only has the numbers before "."(decimal point)
    //so the half perimeter "s" could have caused a problem if not declared as a float type variable

    a = 8;
    b = 6;
    c = 9;

    p = a+b+c;
    s = p/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf ("The perimeter of the triangle is %f unit and \nthe area is %f square unit",p,area);
}
