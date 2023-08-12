//A program to find the LCM of two numbers

#include <stdio.h>

main ()
{
    int a, b, c, d, e;

    printf ("Enter two numbers:\n");
    scanf ("%d%d", &a, &b);

    for (c = 1; c != 0; c++)        //loop for LCM here
    {
        d = a * c;      //c is multiplied by number and a is input number multiplied with

        if (d % b == 0)   //if the answer of the multiplication is divisible by the other input that means the other input is also a multiple
            break;
    }

    printf ("LCM=%d",d);

    return 0;
}
