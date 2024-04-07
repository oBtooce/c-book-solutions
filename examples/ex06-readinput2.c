/*
 * Example 6: Read Input 2: Electric Refactor-oo
 *
 * Description: This is the second use of input reading tech (getchar/putchar).
 */

#include <stdio.h>

/* copy input to output, 2nd version */
main() {
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
