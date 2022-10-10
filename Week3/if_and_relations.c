/*
SN Coder
if and relations and flow of control
October, 10, 2022
*/

#include <stdio.h>

int main()
{
    int speed;
    printf("\nEnter your speed as an interger: ");
    scanf("%d", &speed);
    if (speed < 65)
        printf("\nNo speeding Ticket\n\n");
    else
        printf("\nSpeeding Ticket");
    return 0;
}