//A program to check whether the number is strong number or not

#include <stdio.h>

main ()
{
    int a, b, c, s1, s2 = 0;

    printf ("Enter the number:\n");
    scanf ("%d", &a);

    c = a;

    while (a != 0)                      //loop to count the digits backwards (b)
    {
        b = a % 10;
        a = a / 10;

        for (s1 = 1; b >= 1; b--)       //loop to multiply the first backwards digit with digit from it to 1 means factorial of (b) which is s1
        {
            s1 = s1 * b;
        }
        s2 = s2 + s1;                   //add the backward digits factorials (s1) to (s2)
    }
    if (c == s2)                        //check if the added number(s2) is == to input number (n)
    {
        printf ("Strong number.");
    }
    else
    {
        printf ("Not strong number.");
    }

    return 0;
}
