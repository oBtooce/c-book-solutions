/*
 * Example 2: Fahrenheit-to-Celsius Conversion Table: Float Edition
 *
 * Description: Create a table of temperatures in both Celsius and Fahrenheit.
 * The values in this table are of type float.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, 40, ..., 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
