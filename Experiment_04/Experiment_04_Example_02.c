//A program to calculate the sum of first n natural numbers

#include <stdio.h>

main ()
{
    int num,count,sum =0;

    printf ("Enter a positive integer:\n");
    scanf ("%d",&num);

    for (count =1 ; count <=num; ++count)
    {
        sum += count;
    }
    printf ("Sum = %d",sum);

    return 0;
}
