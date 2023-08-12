//A program to print all the fibonacci numbers

#include <stdio.h>

main ()
{
    int n, a, b, c;

    printf ("Enter the last number:\n");
    scanf ("%d", &n);

    a = 0, b = 1, c = 0;

    while (a <= n)          //loop until a <= n
    {
        c = a + b;          //add a and b to c
        printf ("%d ",a);   //print a
        a = b, b = c;       //input b to a and c to b
    }

    return 0;
}
