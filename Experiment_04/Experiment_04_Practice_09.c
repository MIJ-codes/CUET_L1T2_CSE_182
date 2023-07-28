//A program to find all the factors of a number

#include <stdio.h>

main ()
{
    int i,a;

    printf ("Enter the number:\n");
    scanf ("%d",&i);

    for (a=1; a<=i; a++)
    {
        if (i%a==0)
        {
            printf ("A factor is %d \n",a);
        }
    }

    return 0;
}
