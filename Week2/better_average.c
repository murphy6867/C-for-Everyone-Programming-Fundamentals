/*
 * Compute a better average 
 */

#include<stdio.h>

int	main(void)
{
	int	i;
	double	x;
	double	avg = 0.0; //a better average
	double	navg; //a Naive average
	double	sum = 0.0;

	for(i = 1;scanf("%lf", &x) == 1;++i){
		avg += (x - avg) / i;
		sum += x;
		navg = sum /i;
		printf("i = %d\n, x = %.2lf\n, avg = %.2lf\n, navg = %.2lf\n", i, x, avg, navg);
	}
	return 0;
}
