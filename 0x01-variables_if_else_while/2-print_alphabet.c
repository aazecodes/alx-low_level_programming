#include <stdio.h>
/**
*main -entry point
*Description: prints alphabets in lower case
*Return: no return
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar(10);
	return (0);

}
