// Write program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
char main()
{
    char character;
    printf("enter a character to check if it is a vowel or consonant:");
    scanf("%c", &character);
    if (character == 'a' || character == 'A' || character == 'e' || character == 'E' ||
        character == 'i' || character == 'I' || character == 'o' || character == 'O' ||
        character == 'u' || character == 'U')
    {
        printf("the character provide is a vowel ");
    }
    else
    {
        printf("the character provided is a consonant");
    }
    return 0;
}