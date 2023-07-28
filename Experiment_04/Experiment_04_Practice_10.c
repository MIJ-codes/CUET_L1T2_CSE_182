//A program to calculate the factorial of any number

#include <stdio.h>

main ()
{
    int i,s=1;

    printf ("Enter the number:\n");
    scanf ("%d",&i);

    while (i>=1)
    {
        s=s*i;
        i--;
    }
    printf ("Factorial=%d",s);

    return 0;
}
