#include <stdio.h>  
#include <math.h>

int main(void)
{
    float v              = 0.1;
    float sineVal   = 0.0;

    printf("Input a number between [0, 1]: ");
    scanf_s("%f", &v);

    sineVal         = sin(v);

    printf("sin(%f) = %f\n\n", v, sineVal);
    return 0;
}
