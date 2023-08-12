//A program to find the GCD of two numbers

#include <stdio.h>

main ()
{
    int a, b, c = 1, d;

    printf ("Enter two numbers:\n");
    scanf ("%d%d", &a, &b);

    while (c <= a && c <= b)
    {
        if (a % c == 0 && b % c == 0)
        {
            d = c;
        }

        c++;
    }

    printf ("GCD=%d", d);

    return 0;
}
