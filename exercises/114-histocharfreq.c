/*
 * Exercise 1-14: Histogram of Character Occurrences
 *
 * Description: Given an input, create a histogram showing occurrences of characters from the input.
 *
 * Note that this solution will only check for lowercase letters.  At this stage of the book,
 * it should not be expected to know that the size of the character set is much larger than
 * simply a-z, e.g. UPPERCASE letters and numbers should also be included.
 */
#include <stdio.h>

#define LOWERCASES 26

main() {
	int c, i, j;
	int chars[LOWERCASES];
	char letters[LOWERCASES];

	/* There is 100000000000% a better way to do this lol */
	letters[0] = 'a';
	letters[1] = 'b';
	letters[2] = 'c';
	letters[3] = 'd';
	letters[4] = 'e';
	letters[5] = 'f';
	letters[6] = 'g';
	letters[7] = 'h';
	letters[8] = 'i';
	letters[9] = 'j';
	letters[10] = 'k';
	letters[11] = 'l';
	letters[12] = 'm';
	letters[13] = 'n';
	letters[14] = 'o';
	letters[15] = 'p';
	letters[16] = 'q';
	letters[17] = 'r';
	letters[18] = 's';
	letters[19] = 't';
	letters[20] = 'u';
	letters[21] = 'v';
	letters[22] = 'w';
	letters[23] = 'x';
	letters[24] = 'y';
	letters[25] = 'z';

	for (i = 0; i < LOWERCASES; ++i)
		chars[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z')
			++chars[c - 'a'];
	}

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Character Occurrence Histogram\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

	for (i = 0; i < LOWERCASES; ++i) {
		printf("%c | ", letters[i]);
		for (j = 0; j < chars[i]; ++j)
			putchar('*');

		putchar('\n');
	}
}
