#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer variable
 * @letters: The number of letters to be read.
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t a, b, c;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr ==  NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, ptr, letters);
	c = write(STDOUT_FILENO, ptr, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	close(a);
	return (c);
}
