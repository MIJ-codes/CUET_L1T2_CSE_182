//A program to find if the number is even or odd

#include <stdio.h>

int main ()
{
    int a;

    printf ("Enter an integer number: \n");
    scanf ("%d",&a);

    if (a%2 == 0)
    {
        printf ("%d number is an even integer.",a);
    }
    else
    {
        printf ("%d is an odd integer.",a);
    }
}
