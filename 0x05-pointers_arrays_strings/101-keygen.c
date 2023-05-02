#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int idx;
	int i;
	char charset[] = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		idx = rand() % sizeof(charset) + 1;
		_putchar(charset[idx]);
	}
	return (0);
}
