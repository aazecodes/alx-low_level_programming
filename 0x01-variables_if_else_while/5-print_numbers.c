#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints from 0 to 9
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar(10);
	return (0);
}
