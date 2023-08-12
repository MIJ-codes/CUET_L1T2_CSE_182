// A program to demonstrate the use of break statement

#include <stdio.h>

void main ()
{
    int i;

    for (i = 0; i < 10; i++)       //loop to print 1 to 10
    {
        printf ("%d", i);

        if (i == 6)     //condition for break statement
            break;      //break statement means to not do anything inside the loop after it and get out of the loop
    }

    printf ("\nCame outside of loop i = %d", i);

    return 0;
}
