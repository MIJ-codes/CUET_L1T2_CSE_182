// A program to find the reverse of a number and check if it's palindrome or not

#include <stdio.h>

main ()
{
    int i, n=0, a, b;

    printf ("Enter an integer:\n");
    scanf ("%d", &i);

    b = i;      //i is input into b

    while (i != 0)      //loop to make the reverse number
    {
        a = i % 10;
        n = ( n * 10 ) + a;
        i = i / 10;         //i changes here because of loop
    }

    printf ("Reverse number : %d\n", n);

    if (b == n)
    {
        printf ("Palindrome number.");
    }
    else
    {
        printf ("Not a palindrome number.");
    }

    return 0;
}
