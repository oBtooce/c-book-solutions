/*
 * Exercise 1-13: Histogram of Word Lengths - Vertical Version
 *
 * Description: Given any input, print a histogram of lengths of words moving vertically.
 */
#include <stdio.h>

#define IN 1		/* inside a word */
#define OUT 0		/* outside a word */
#define WORD_MAX 10 	/* maximum number of input words allowed */

main() {
	int c, i, j, words, state;
	int lengths[WORD_MAX];

	state = OUT;
	words = 0;
	for (i = 0; i < WORD_MAX; ++i)
		lengths[i] = 0;

	while ((c = getchar()) != EOF && words != WORD_MAX) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			++words;
		}
		else {
			if (state == OUT)
				state = IN;

			++lengths[words];
		}
	}

	printf("~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Word Length Histogram!\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~\n\n");

	for (i = 0; i < words; ++i) {
		for (j = 0; j < lengths[i]; ++j)
			putchar('*');
		putchar('\n');
	}
}
