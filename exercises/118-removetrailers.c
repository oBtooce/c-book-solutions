/*
 * Exercise 1-18: Remove Extraneous Whitespace/Newlines
 *
 * Description: Given an input, remove all trailing whitespace.  Also, remove any totally blank lines.
 */
#include <stdio.h>

#define MAXCHARS 200

int lineget(char line[], int maxchars);

main()
{
	int lineLen;
	char line[MAXCHARS];
	
	while ((lineLen = lineget(line, MAXCHARS)) > 0)
	{
		if (lineLen == 1)
			;
		else
			printf("%s", line);
	}
}

int lineget(char s[], int limit)
{
	int c, i;

	for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}
