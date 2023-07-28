//A program to calculate the sum of digits of any number

#include <stdio.h>
#include <math.h>

main ()
{
    int i,a,n,sum=0;

    printf ("Enter the number:\n");
    scanf ("%d",&i);

    n=i*i;
    i=sqrt(n);

     while (i>=1 || i<=-1)
    {
        a=i%10;
        i=i/10;
        sum+=a;
    }
    printf ("Sum=%d",sum);

    return 0;
}
