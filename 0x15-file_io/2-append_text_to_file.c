#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: written content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int z;

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);
	if (text_content)
	{
		for (y = 0; text_content[y]; y++)
			;
		z = write(x, text_content, y);

		if (z == -1)
			return (-1);
	}
	close(x);
	return (1);
}
