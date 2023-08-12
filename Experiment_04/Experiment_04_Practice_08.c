//A program to enter a number and print it's reverse

#include <stdio.h>

main ()
{
    int i,a,n=0;
    printf ("Enter the number:\n");
    scanf ("%d",&i);

    while (i>=1 || i<=-1)
    {
        a=i%10;
        n=(n*10)+a;
        i=i/10;
    }
    printf ("Reverse number = %d",n);

    return 0;
}
