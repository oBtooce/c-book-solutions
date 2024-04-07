/*
 * Exercise 1-9: Remove Extra Whitespace
 *
 * Description: Print output from an input and remove extra spaces where necessary.
 */

#include <stdio.h>

main() {
	int c;
	
	while ((c = getchar()) != EOF) {
		/* always print the character */
		putchar(c);

		/* continually do nothing while character value is a space */
		if (c == ' ') {
			while ((c = getchar()) == ' ')
				;
			
			/* need to put the character that broke us out of the while! */
			putchar(c);
		}
	}
}
