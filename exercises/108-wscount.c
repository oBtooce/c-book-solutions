/*
 * Exercise 1-8: Whitespace Counting
 *
 * Description: Given some input, return totals for spaces, tabs, and newlines.
 */

#include <stdio.h>

main() {
	int c, spaces, tabs, lines;

	spaces = 0;
	tabs = 0;
	lines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++spaces;
		if (c == '\t')
			++tabs;
		if (c == '\n')
			++lines;
	}

	printf("Number of spaces: %d\n", spaces);
	printf("Number of tabs: %d\n", tabs);
	printf("Number of lines: %d\n", lines);
}
