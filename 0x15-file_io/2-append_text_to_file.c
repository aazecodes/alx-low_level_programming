#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
  * @filename: char pointer
 * @text_content: Char pointer
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int strt, add, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)

	while (text_content[len] != '\0')
	{
		len++;
	}

	strt = open(filename, O_WRONLY | O_APPEND);

	add = write(strt, text_content, len);

	if (strt == -1 || add == -1)
		return (-1);
	close(strt);
	return (1);
}
