#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print both lower and uppercase characters
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	}
	putchar(10);
	return (0);
}

