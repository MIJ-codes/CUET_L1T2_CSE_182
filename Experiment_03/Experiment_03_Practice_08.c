//A program to find electricity bill

#include <stdio.h>

main ()
{
    int a;
    float r,rs;

    printf ("Enter the amount of electricity unit:\n");
    scanf ("%d",&a);

    if (a>=0)
    {
        if (a<=50)
        {
            r = a*0.50;
            rs = r+(r*(2/10));
        }
        else if (a<=150)
        {
            r = (a-50)*0.75+(50*0.50);
            rs = r+(r*(2/10));
        }
        else if (a<=250)
        {
            r = (50*0.50)+(100*0.75)+((a-150)*1.20);
            rs =r+(r*(2/10));
        }
        else if (a>250)
        {
            r = (50*0.50)+(100*0.75)+(100*1.20)+((a-250)*1.50);
            rs =r+(r*(2/10));
        }
        printf ("The electricity bill is %f Rs",rs);
    }
    else if (a<0)
    {
        printf ("Invalid");
    }
}
