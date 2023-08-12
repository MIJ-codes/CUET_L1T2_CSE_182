//A program to find all the prime factors of a number

#include <stdio.h>

main ()
{
    int n, a, b;

    printf ("Enter the number:\n");
    scanf ("%d", &n);

    for (a = 2; a <= n; a++)                        //loop to count all the numbers(a) from 2 to n
    {
        if (n % a == 0)                             //condition to check if the input number is divisible by loop numbers(a)
        {
            for (b = 2; b <= a; b++)                //loop to count all the numbers(b) from 2 to the previous loop number(a)
            {
                if (a % b == 0 && a == b)           //condition to check if the previous loop number(a) is only divisible by only it(a) means to check if a == b
                {
                    printf ("%d ", a);
                }
                else if (a % b == 0 && a != b)      //condition to check if the previous loop number(a) is only divisible by not only it but also others
                    break;
            }
        }
    }

    return 0;
}
