/* C for Everyone
 * Homage to K&R
 * Coversion of Fahrenheit to Celsius
 *
 * C = (F - 32)/1.8
 * SN Coder
 * October, 7, 2022
 */

#include<stdio.h>

int	main()
{
	int fahrenheit, celsius;

	printf("Please enter fahrenheit as an integer:");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8; //note conversion
	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
	return 0;
}
