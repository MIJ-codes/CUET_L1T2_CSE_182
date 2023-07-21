// Calculate the area and perimeter of a triangle

#include <stdio.h>

void main ( )
{
    int a,b,c,p,s;
    float area;

    printf ("Enter three sides of Triangle:\n");
    scanf ("%d%d%d",&a,&b,&c);

    p = a+b+c;
    s = p/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf ("Perimeter = %d \nArea = %f",p,area);
}
