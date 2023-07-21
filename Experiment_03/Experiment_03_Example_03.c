//A program to find to relate two numbers

#include <stdio.h>

main ()
{
    int a,b;

    printf ("Enter two integer numbers:\n");
    scanf ("%d%d",&a,&b);

    if (a==b)
    {
        printf ("%d = %d",a,b);
    }
    else if (a>b)
    {
        printf ("%d > %d",a,b);
    }
    else
    {
        printf("%d < %d",a,b);
    }
}
