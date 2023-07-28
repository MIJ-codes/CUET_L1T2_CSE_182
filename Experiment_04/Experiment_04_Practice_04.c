//A program to find sum of all natural numbers from 1 to n

#include <stdio.h>

main ()
{
    int i,sum=0;
    printf ("Enter the last integer number:\n");
    scanf ("%d",&i);

    while (i>=1)
    {
        sum = sum+i;
        i--;
    }
    printf ("Sum=%d",sum);

    return 0;
}
