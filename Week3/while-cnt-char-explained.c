/*
While-cnt-char-explained
SN Coder
October, 10, 2022
*/

#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c; // use for int value of charector.
    while ((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
        else if ((c >= 'a') && (c <= 'z')|| (c >= 'A') && (c >= 'Z'))
            ++letters;
        else
            ++others;
    }
    printf("Blanks = %d, Digits = %d, Letters = %d", blanks, digits, letters);
    printf(", Other = %d\n\n", others);
    return 0;
}