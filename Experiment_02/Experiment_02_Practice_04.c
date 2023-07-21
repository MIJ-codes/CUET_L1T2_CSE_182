// A program to convert celsius into farenhite

#include <stdio.h>

void main ( )
{
    float c,f;

    printf ("Enter the temperature in Celsius unit:\n");
    scanf ("%f",&c);

    f = ((9*c)/5)+32;

    printf ("The temperature is %f degree Farenhite",f);    // discussion: it was forgotten to add the variable "f" after "(quotation mark) in printf function
}
