/*
 * Example 5: Read Input
 *
 * Description: This is the first use of input reading tech (getchar/putchar).
 */

#include <stdio.h>

/* copy input to output, 1st version */
main() {
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
