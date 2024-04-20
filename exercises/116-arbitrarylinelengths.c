/*
 * Exercise 1-16: Arbitrary Line Lengths & Input
 *
 * Description: Given an input, return the length of the input and as much of the string as possible.
 */
#include <stdio.h>
#define MAXLINE 20	/* maximum input line length */

int lineget(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int len;		/* current line length */
	char line[MAXLINE];	/* current input line */

	/* the if-else here is purely for formatting purposes */
	while ((len = lineget(line, MAXLINE)) > 0)
		if (len > MAXLINE)
			printf("Length: %d | %s\n", len, line);
		else
			printf("Length: %d | %s", len, line);

	return 0;
}

/* lineget: read a line into s, return length
 *
 * Note: naming this function 'getline' as shown in the example
 * causes annoying compiler issues! */
int lineget(char s[], int lim)
{
	int c, i;
	
	/* set s with the input string up to the buffer size, but keep counting the length past that point */
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 1)
			s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
