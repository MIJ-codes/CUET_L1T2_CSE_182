//A program to print alphabets from a to z

#include <stdio.h>

main ()
{
    int i=97;

    while (i<=122)
    {
        printf ("%c ",i);   //discussion: in c the character can be print if the format specifier is changed
        i++;
    }
    return 0;
}
