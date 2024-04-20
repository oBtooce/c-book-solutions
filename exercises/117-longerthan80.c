/*
 * Exercise 1-17: Print 80+-Character Lines
 *
 * Description: Print all lines from a given input that exceed 80 characters.
 */
#include <stdio.h>
#define MAXLINE 200	/* maximum input line length */
#define PRINT_LIMIT 80	/* factor that determines whether lines are printed */

int lineget(char line[], int maxline);

/* print the longest input line */
main()
{
	int len;		/* current line length */
	char line[MAXLINE];	/* current input line */

	while ((len = lineget(line, MAXLINE)) > 0)
		if (len > PRINT_LIMIT)
			printf("%s", line);
	return 0;
}

/* getline: read a line into s, return length */
int lineget(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
