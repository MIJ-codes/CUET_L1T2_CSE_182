//A program to create simple calculator using switch case

#include <stdio.h>

main ()
{
    int n1, n2, s;
    char o;

    printf ("Enter the numbers:\n");
    scanf ("%d%c%d", &n1, &o, &n2);

    switch (o)
    {
    case '+':
        s = n1 + n2;
        break;

    case '-':
        s = n1 - n2;
        break;

    case '*':
        s = n1 * n2;
        break;

    case '/':
        s = n1 / n2;
        break;

    default:
        printf ("Unavailable");
    }

    printf ("Result=%d",s);

    return 0;
}

