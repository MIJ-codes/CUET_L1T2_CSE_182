// A program to find maximum between three numbers

#include <stdio.h>

void main ( )
{
    float a,b,c;

    printf ("Enter the three numbers:\n");
    scanf ("%f%f%f",&a,&b,&c);

    if (a==b && a==c)
    {
        printf ("All the numbers are the same therefore no maximum numbers");   // Discussion: there was a mistake in writing the condition
    }
    //to write two variables as equal as a condition the "=="
    //is needed instead of "="

    //Discussion: to put multiple conditions as true
    //in the "if...else" function the "&&" sign is required
    //this works as "and"
    //for either of the conditions to be true the "||" sign
    //is required this works as "or"
    else if (a>=b && a>=c)
    {
        printf ("The maximum number is %f",a);
    }
    else if (b>=a && b>=c)
    {
        printf ("The maximum number is %f",b);
    }
    else if (c>=a && c>=b)
    {
        printf ("The maximum number is %f",c);
    }
    else
    {
        printf ("There is no maximum number");   //Discussion: it was learned that the statement
    }
    //"else" doesn't include any conditions
}
