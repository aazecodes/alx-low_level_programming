#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing digits using putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
	putchar(digit);
	}
	putchar('\n');
	return (0);
}
