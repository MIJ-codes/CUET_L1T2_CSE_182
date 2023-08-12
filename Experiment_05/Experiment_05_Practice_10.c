//A program to print day of week using switch case

#include <stdio.h>

int main ()
{
    int d;

    printf ("Enter day number:\n");
    scanf ("%d", &d);

    switch (d)
    {
    case 1:
        printf ("Saturday");
        break;

    case 2:
        printf ("Sunday");
        break;

    case 3:
        printf ("Monday");
        break;

    case 4:
        printf ("Tuesday");
        break;

    case 5:
        printf ("Wednesday");
        break;

    case 6:
        printf ("Thursday");
        break;

    case 7:
        printf ("Friday");
        break;

    default:
        printf ("Unavailable");
    }

    return 0;
}
