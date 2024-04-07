/*
 * Example 3: Fahrenheit-to-Celsius Table, But the Code Is Cleaner
 *
 * Description: Same as previous examples, but the code has been refactored.
 */

#include <stdio.h>

main() {
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
