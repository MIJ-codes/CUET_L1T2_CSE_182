//A program to print all the natural numbers in reverse

#include <stdio.h>

int main ()
{
    int i,n;

    printf ("Enter a positive integer:\n");
    scanf ("%d",&n);

    while (n>=1)
    {
        printf ("%d ",n);
        n--;
    }
    return 0;
}
