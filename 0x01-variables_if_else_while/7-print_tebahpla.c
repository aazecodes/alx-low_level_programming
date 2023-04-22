#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabets backwards
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar(10);
	return (0);
}
