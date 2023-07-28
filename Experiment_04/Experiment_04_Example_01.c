//A program to print the first 10 numbers

#include <stdio.h>

main ()
{
    int a,i;

    printf ("Enter the initial number:\n");
    scanf ("%d",&i);

    for (a=i; a<5; a=a+1)
    {
        printf ("The numbers are %d \n",a);
    }

    return 0;
}
