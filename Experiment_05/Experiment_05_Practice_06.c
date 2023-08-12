//A program to find sum of all the prime numbers between 1 to n

#include <stdio.h>

main ()
{
    int n, i, a, d = 0;

    printf ("Enter the last number:\n");
    scanf ("%d", &n);

    for (i = 1; i <= n; i++)        //loop of numbers from 1 to n
    {
        for (a = 2; a <= i; a++)    //loop to check if the number is divisible by 2 to n
        {
            if (i % a == 0 && i == a)   //condition if the number is divisible by only that number
            {
                d = d + i;
            }
            else if (i % a == 0 && i != a)  //condition if the number is divisible by not only that number but also others
                break;
        }
    }

    printf ("Sum=%d", d);

    return 0;
}

