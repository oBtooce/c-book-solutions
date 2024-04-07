/*
 * Exercise 1-6: The Value of EOF
 *
 * Description: Show that (getchar() != EOF) will either equal 0 or 1 (boolean).
 */

#include <stdio.h>

main() {
	/* note for triggering EOF in Ubuntu:
	 * pressing CTRL + D will tell the terminal
	 * that no more input is expected, which
	 * sets the next character to EOF. */
	int c;

	c = getchar();
	while (c != EOF) {
		printf("%d", c != EOF);
		c = getchar();
	}

	/* this one is exclusively to show the 0 result */
	printf("%d", c != EOF);
}
