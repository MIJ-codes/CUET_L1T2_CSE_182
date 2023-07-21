//A program to check whether the number is divisible by 5 and 11

#include <stdio.h>

main ()
{
    int a;

    printf ("Enter a number:\n");
    scanf ("%d",&a);

    if (a%5==0 && a%11==0)
    {
        printf ("The number is divisible by both 5 and 11");
    }
    else if (a%5==0 && a%11!=0)
    {
        printf ("The number is only divisible by 5");
    }
    else if (a%5!=0 && a%11==0)
    {
        printf ("The number is only divisible by 11");
    }
    else
    {
        printf ("The number is not divisible by 5 or 11");
    }
}
