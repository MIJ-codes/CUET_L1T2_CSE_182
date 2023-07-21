//A program to check whether the triangle is equilateral or isosceles or scalene

#include <stdio.h>

main ()
{
    int a,b,c;

    printf ("Enter three sides of triangle:\n");
    scanf ("%d%d%d",&a,&b,&c);

    if (a+b>c && b+c>a && c+a>b)
    {
        if (a==b && b==c && c==a)   //discussion: here if the condition is written as (a==b==c) then the code does not work but down below the condition (a!=b!=c) is working.why?
        {
            printf ("The triangle is equilateral.");
        }
        else if (a==b || b==c || c==a)
        {
            printf ("The triangle is isosceles.");
        }
        else
        {
            printf ("The triangle is scalene.");
        }
    }
    else
    {
        printf ("The triangle is not valid");
    }
}
