//A program to print the odd numbers of a range

#include <stdio.h>

main ()
{
    int a1,a2,b,sum=0;

    printf ("Enter the first and last odd numbers:\n");
    scanf ("%d%d", &a1, &a2);

    for (b=a1; b<=a2; b=b+2)
    {
        sum = sum+b;
    }
    printf ("Sum=%d",sum);

    return 0;
}
