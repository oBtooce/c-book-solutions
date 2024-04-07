/*
 * Exercise 1-3: Fahrenheit-to-Celsius Conversion Table With Header
 *
 * Description: Create a table of temperatures in both Celsius and Fahrenheit.
 * This table contains a header to describe the data.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, 40, ..., 300 */
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	/* Create header here */
	printf("**************************************\n");
	printf("Fahrenheit-to-Celsius Conversion Table\n");
	printf("**************************************\n\n");

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
