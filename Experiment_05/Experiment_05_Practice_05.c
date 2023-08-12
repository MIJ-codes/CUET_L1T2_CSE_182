//A program to find all the prime numbers between 1 to n

#include <stdio.h>

main ()
{
    int n, i, a;

    printf ("Enter the last number:\n");
    scanf ("%d", &n);

    for (i = 1; i <= n; i++)  //loop to count number from 1 to n
    {
        for (a = 2; a <= i; a++)    //loop to check if the number is divisible by 2 to n
        {
            if (i % a == 0 && i == a)       //condition if the number is divisible by only that number
            {
                printf ("%d ", i);
            }
            else if (i % a == 0 && i != a)  //condition if the number is divisible by not only that number but also others
                break;
        }
    }

    return 0;
}
