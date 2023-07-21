// A program to find maximum between numbers

#include <stdio.h>

void main ( )
{
    int a,b;

    printf ("Enter two numbers:\n");
    scanf ("%d%d",&a,&b);               // discussion: here it was forgotten to add the & sign

    (a>b)? printf ("Max = %d",a) : printf ("Max = %d",b);

    // here the program only works until a point maybe after a little more than 1000000000  why? i don't know
}
