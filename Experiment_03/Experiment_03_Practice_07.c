//A program to find all roots of quadratic equation

#include <stdio.h>
#include <math.h>

main ()
{
    float a,b,c,s1,s2;
    printf ("Enter the value of a,b,c of the equation ax*x+bx+c=0:\n");
    scanf ("%f%f%f",&a,&b,&c);

    if (((b*b)-(4*a*c))==0)
    {
        s1 = (-b/(2*a));
        printf ("The solution is %f.",s1);
    }
    else if (((b*b)-(4*a*c))>0)
    {
        s1 = (-b+sqrt((b*b)-(4*a*c)))/2*a;
        s2 = (-b-sqrt((b*b)-(4*a*c)))/2*a;

        printf ("The solutions are %f and %f.",s1,s2);
    }
    else
    {
        printf ("There are no real solutions.");
    }
}
