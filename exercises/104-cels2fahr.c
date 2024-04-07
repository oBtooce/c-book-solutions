/*
 * Exercise 1-4: Celsius-to-Fahrenheit Conversion
 *
 * Description: Print a table of Celsius and Fahrenheit temperatures.
 */

#include <stdio.h>

main() {
	int cels, fahr;
	int upper, lower, step;

	upper = 300;
	lower = 0;
	step = 20;

	cels = lower;

	printf("**************************************\n");
	printf("Celsius-to-Fahrenheit Conversion Table\n");
	printf("**************************************\n\n");

	while (cels <= upper) {
		fahr = (cels * 9 / 5) + 32;
		printf("%d\t%d\n", cels, fahr);
		cels += step;
	}
}
