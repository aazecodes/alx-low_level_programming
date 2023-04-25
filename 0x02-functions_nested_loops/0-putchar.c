#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *w = "_putchar\n";

	while (*w)
	{
	putchar(*w);
	w++;
	}
	return (0);
}
