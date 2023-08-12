//A program to demonstrate the use of continue statement

#include <stdio.h>

void main ()
{
    int i;

    for (i = 0; i <= 20; i++)
    {
        if (i % 5 == 0)     //condition of the loop statement
        {
            printf (" Pass");

            continue;       //if there is a continue it means to not do any other works inside the loop and restart the loop again
        }

        printf ("%d,", i);
    }

    return 0;

}

