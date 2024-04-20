/*
 * Exercise 1-15: Temperature Conversion Using Functions
 *
 * Description: This program follows the ideas posted in earlier subchapters, but uses
 * a function to calculate the temperatures instead.
 */
#include <stdio.h>

#define UPPER 300	/* upper bound on temperature */
#define LOWER 0		/* lower bound on temperature */
#define STEP 20		/* step size */

int convert(float fahr);

main()
{
	float fahr, i;

	fahr = LOWER;
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Fahrenheit-to-Celsius Conversion Using A Function\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	
	while (fahr <= UPPER) {
		convert(fahr);
		fahr = fahr + STEP;
	}
}

int convert(float fahr)
{
	printf("%3.0f %6.1f\n", fahr, ((5.0/9.0) * (fahr-32.0)));

	return 0;
}
