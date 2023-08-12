//A program to find the reverse number

#include <stdio.h>

int main()
{
    int n, rev = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)  //loop to mode the number
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;     //add the mode to a decimal number
        n /= 10;
    }

    printf("Reversed number = %d", rev);

    return 0;
}
