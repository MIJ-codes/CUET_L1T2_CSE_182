//A program to show the grades

#include <stdio.h>

main ()
{
    int a;

    printf ("Enter your number:\n");
    scanf ("%d",&a);

    if (a>=0 && a<=100)
    {
        if  (a >= 80)
        {
            printf ("The obtained grade is A+");
        }
        else if  (a >= 75 && a<80)
        {
            printf ("The obtained grade is A");
        }
        else  if  (a >= 70 && a<75)
        {
            printf ("The obtained grade is A-");
        }
        else if  (a >= 65 && a<70)
        {
            printf ("The obtained grade is B+");
        }
        else if  (a >= 60 && a<65)
        {
            printf ("The obtained grade is B");
        }
        else if  (a >= 55 && a<60)
        {
            printf ("The obtained grade is C+");
        }
        else if  (a >= 50 && a<55)
        {
            printf ("The obtained grade is C");
        }
        else if  (a >= 45 && a<50)
        {
            printf ("The obtained grade is D");
        }
        else if  (a >= 40 && a<45)
        {
            printf ("The obtained grade is E");
        }
        else
        {
            printf ("Failed");
        }
    }
    else
    {
        printf ("Invalid");
    }

}
