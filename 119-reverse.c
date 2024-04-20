/*
 * Exercise 1-19: Reverse String
 *
 * Description: Given an input, reverse the input and output this result.
 */
#include <stdio.h>

#define MAXLINE 1000

int lineget(char line[], int maxline);
void reverse(char line[], char antiline[], int length);

main()
{
	int len;
	char line[MAXLINE];
	char flipped[MAXLINE];

	while ((len = lineget(line, MAXLINE)) > 0)
	{
		reverse(line, flipped, len);
		printf("%s", flipped);
	}
	return 0;
}

int lineget(char s[], int limit)
{
	int c, i;

	for (i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void reverse(char input[], char flipped[], int length)
{
	int i;
	
	/* The -2 is for the newline and the zero terminator;
	 * even though the \0 is not part of the string length,
	 * we need to account for it in the output */
	for (i = 0; i <= length-1; ++i)
		flipped[length - i - 2] = input[i];

	flipped[length-1] = '\n';
	flipped[length] = '\0';
}
