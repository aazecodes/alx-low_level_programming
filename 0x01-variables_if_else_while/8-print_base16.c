 #include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all hex numbers in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int digit;
	char letter;

	for (digit = '0'; digit <= '9'; ++digit)
	{
	putchar(digit);
	}
	for (letter = 'a'; letter <= 'f'; ++letter)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
