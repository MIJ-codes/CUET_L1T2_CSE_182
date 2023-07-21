//A program to find the maximum number

#include <stdio.h>

main ()
{
    int a,b,c,d;

    printf ("Enter three numbers:\n");
    scanf ("%d%d%d",&a,&b,&c);

    if (a>=b && a>=c)
    {
        d = a;
    }
    else if (b>=c && b>=a)
    {
        d = b;
    }
    else if (c>=a && c>=b)
    {
        d = c;
    }
    else
    {
        printf ("There is no maximum number");
    }
    printf ("The maximum number is %d",d);
}
