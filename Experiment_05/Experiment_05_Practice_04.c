//A program to check whether the number is prime or not

#include <stdio.h>

main ()
{
    int i, a;

    printf ("Enter the number:\n");
    scanf ("%d", &i);

    for (a = 2; a <= i; a++)        //loop of the number with what the number will be divided by
    {
        if ( i % a == 0 && a == i)      //condition for prime number means divisible by only its own number
        {
            printf ("Prime number.");
        }
        else if (i % a == 0 && a != i)  //condition for a number divisible by his own number but not only his own number
        {
            printf ("Not prime number");

            break;
        }
    }

    return 0;
}
