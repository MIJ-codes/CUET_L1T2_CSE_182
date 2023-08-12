//A program to demonstrate the use of switch statement

#include <stdio.h>

int main ()
{
    char ch ='B';

    switch (ch)
    {
    case 'A':               //only a value can be input here no condition
        printf ("CaseA");
        break;

    case 'B':
        printf ("CaseB");
        break;

    case 'C':
        printf ("CaseC");
        break;

    default:
        printf ("Default");
    }

    return 0;
}
