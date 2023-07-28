//A program to print the odd numbers of a range

#include <stdio.h>

main ()
{
    int a1,a2,b,sum=0;

    printf ("Enter the first odd number:\n");
    scanf ("%d",&a1);
    printf ("Enter the last odd number:\n");
    scanf ("%d",&a2);

    for (b=a1; b<=a2; b=b+2)
    {
        sum = sum+b;
    }
    printf ("Sum of the odd numbers are %d",sum);

    return 0;
}
