/*
 * Exercise 1-12: Input Printed Word-by-Word
 *
 * Description: Given any input, return output with one word on each line.
 */
#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* Consider handling multiple instances of whitespace! */
main() {
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			putchar('\n');
			
			/* Take care of any extra whitespace, then add the next character after breaking out */ 
			while ((c = getchar()) == ' ' || c == '\t' || c == '\n')
				;
			putchar(c);
		}
		else {
			putchar(c);

			if (state == OUT)
				state = IN;
		}
	}
}
