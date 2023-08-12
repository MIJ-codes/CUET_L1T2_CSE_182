//A program to count the number of digits in any number

#include <stdio.h>

main ()
{
    int i,c=0;

    printf ("Enter the number:\n");
    scanf ("%d",&i);

    while (i != 0)
    {
        i=i/10;
        c+=1;
    }
    printf ("There are %d digits",c);

    return 0;
}
