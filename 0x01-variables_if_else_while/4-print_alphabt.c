#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabets without q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'q' || letter == 'e')
	{
	continue;
	}
	putchar(letter);
	}
	putchar(10);
	return (0);
}
