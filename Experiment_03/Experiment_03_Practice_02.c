//A program to check whether the number is positive negative or zero

#include <stdio.h>

main ()
{
    int a;

    printf ("Enter a number:\n");
    scanf ("%d",&a);

    if (a>0)
    {
        printf ("The number is positive.");
    }
    else if (a==0)
    {
        printf ("The number is zero.");
    }
    else if (a<0)
    {
        printf ("The number is negative.");
    }
}
