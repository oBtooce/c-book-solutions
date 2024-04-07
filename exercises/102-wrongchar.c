/*
 * Example 1-2: Wrong Escape Character
 *
 * Description: Attempt to write "Hello world" to the terminal with a non-existent escape character.
 */

#include <stdio.h>

main()
{
	printf("Hello world\w");
}
