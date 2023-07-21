// A program to calculate the the area of a circle

#include <stdio.h>

main ( )
{
    int r;
    float pi,area;

    pi = 3.1416;
    r = 5;

    area = pi*r*r;

    printf("The area of the circle with radius %d unit is \n%f square unit ",r,area);

    // 1.after running the program there was an error in the calculated value
    // then it was found that within the code the "area" and the "pi" variables are float type variables
    // but they were declared as integer type variables
    //which caused the function to return only integer type values causing the error in the error in the calculated values
    // 2. another problem was faced that the answer was coming as zero
    // it was found that in printf function the specifier of variable "r" was wrong and was written as %f instead of %d
}
