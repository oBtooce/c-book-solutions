/*
 * Example 7: Character Counting
 *
 * Description: Count characters in any input.
 */

#include <stdio.h>

/* count characters in input; 1st edition */
main() {
	long nc = 0;

	/* to escape the while in terminal, use CTRL + D */
	while (getchar() != EOF)
		++nc;

	printf("%ld\n", nc);
}
