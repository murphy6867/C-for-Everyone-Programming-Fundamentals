#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NCALLS 10000000 /*number of fct call*/
#define NCOLS 8
#define NLINES 3

int mina(void)
{
    int i, val;
    long begin, diff, end;

    begin = time(NULL);
    srand(time(NULL));
    printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);
    for(i =1; i <= NCALLS; ++i)
    {
        val = rand();
        if(i <= NCOLS * NLINES) 
        {
            printf("%7d", val);
            if(i % NCOLS == 0)
            {
                putchar('\n');
            }
        else if(i == NCOLS * NLINES + 1)
            printf("%7s\n\n","....");
        }
        end = time(NULL);
        diff = end - begin;
        printf("%s%1d\n%s%1d\n%s%1d\n%s%.10f\n\n",end, begin, diff, (diff/NCALLS));
        return 0;
    }
}