#include "main.h"
/**
 * create_file - Creates a new file
  * @filename: Pointer variable
 * @text_content: Pointer variable
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fptr, len, add;

	fptr = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fptr == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}
	for (len = 0; text_content[len] != '\0'; len++)
	add = write(fptr, text_content, len);

	if (add == -1)
		return (-1);
	close(fptr);
	return (1);
}
