//A program to find first and last digits of any numbers

#include <stdio.h>
#include <math.h>

main ()
{
    int i,a,n;

    printf ("Enter the number:\n");
    scanf ("%d",&i);

    n=i*i;
    i=sqrt(n);
    a=i%10;

    while (i>=10 || i<=-10)     //discussion: some problems were faced in the conditioning but later it was solved
    {
        i=i/10;
    }

    printf ("First digit = %d\nLast digit = %d",i,a);

    return 0;
}
