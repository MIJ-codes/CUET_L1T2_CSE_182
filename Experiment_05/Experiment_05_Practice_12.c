//A program to check vowels using switch case

#include <stdio.h>

int main ()
{
    char v;

    printf ("Enter the letter:\n");
    scanf ("%c", &v);

    switch (v)
    {
    case 'A':
    case 'a':
        printf ("Vowel");
        break;

    case 'E':
    case 'e':
        printf ("Vowel");
        break;

    case 'I':
    case 'i':
        printf ("Vowel");
        break;

    case 'O':
    case 'o':
        printf ("Vowel");
        break;

    case 'U':
    case 'u':
        printf ("Vowel");
        break;

    default:
        printf ("Consonant");
    }

    return 0;
}

