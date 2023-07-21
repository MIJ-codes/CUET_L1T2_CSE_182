// A program to find the leap year

#include <stdio.h>

void main ( )
{
    int a;

    printf ("Enter the year:\n");
    scanf ("%d",&a);

    if (a%400 == 0)
    {
        printf ("The year %d is a leap year",a);
    }
    else
    {
        if (a%4 == 0 && a%100 !=0)
        {
            printf ("The year %d is a leap year",a);
        }
        else
        {
            printf ("The year %d is not a leap year",a);
        }
    }
// discussion: it was learned that within an if...else statement another "if...else" statement can be included this is called "nested if...else" statement
}
