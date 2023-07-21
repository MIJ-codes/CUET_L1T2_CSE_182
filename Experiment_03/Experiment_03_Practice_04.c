//A program to check whether the year is leap year

#include <stdio.h>

main ( )
{
    int a;

    printf ("Enter the year:\n");
    scanf ("%d",&a);

    if (a%400 == 0)
    {
        printf ("The year %d is a leap year",a);
    }
    else if (a%4 == 0 && a%100 !=0)
    {
        printf ("The year %d is a leap year",a);
    }
    else
    {
        printf ("The year %d is not a leap year",a);
    }
}
