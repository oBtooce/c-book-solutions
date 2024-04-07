/*
 * Exercise 1-10: Print Escape Characters
 *
 * Description: When given an input, write output that replaces certain characters with their escape character counterpart.
 */

#include <stdio.h>

main() {
	int c;

	while ((c = getchar())!= EOF) {
		if (c == '\\') {
			putchar('\\');
			c = '\\';
		}

		if (c == '\t') {
			putchar('\\');
			c = 't';
		}

		if (c == '\b') {
			putchar('\\');
			c = 'b';
		}

		putchar(c);
	}
}
