//A program to add numbers until the user enters 0

#include <stdio.h>

main ()
{
    double number,sum=0;

    do
    {
        printf ("Enter an");
        scanf ("%lf",&number);
        sum+=number;
    }
    while (number != 0);
    printf ("Sum = %lf",sum);

    return 0;
}
