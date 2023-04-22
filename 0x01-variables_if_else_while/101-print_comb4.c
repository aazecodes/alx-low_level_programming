#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all combinations of three digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 <= 55; num1++)
	{
		for (num2 = num1 + 1; num2 <= 56; num2++)
		{
			for (num3 = num2 + 1; num3 <= 57; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 == 55 && num2 == 56 && num3 == 57)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
