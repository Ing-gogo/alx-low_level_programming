#include "main.h"

/**
 * create_file - function creating afile
 * @filename: name of file created
 * @text_content: written content in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, c;

	if (!filename)
		return (-1);
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (b = 0; text_content[b]; b++)
		;

	c = write(a, text_content, b);
	if (c == -1)
		return (-1);
	close(a);
	return (1);
}


