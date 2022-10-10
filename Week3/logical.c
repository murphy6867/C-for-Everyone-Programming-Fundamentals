/*
SN Coder
logical operators and short circuit evaluation
October, 10, 2022
*/

#include <stdio.h>
int main()
{
    int outside, weather;
    printf("\nEnter if outside 1 true 0 false:");
    scanf("%d", &outside);
    printf("\nEnter if rain 1 true 0 false:");
    scanf("%d", &weather);
    if (outside && weather)
        printf("\nPlease use an Umbrella.\n");
    else
        printf("\nDress normally.\n\n");
    return 0;
}