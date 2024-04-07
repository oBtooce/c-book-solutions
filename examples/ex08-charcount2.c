/*
 * Example 8: Character Counting, part 2
 *
 * Description: Count characters in any input.
 */

#include <stdio.h>

/* count characters in input; 2nd version */
main() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;

	printf("%.0f\n", nc);
}
