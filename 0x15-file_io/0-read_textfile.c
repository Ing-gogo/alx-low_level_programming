#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 * Return: actual number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b, c;
	char *d;

	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	d = malloc(sizeof(char) * letters);
	if (d == NULL)
	{
		close(a);
		return (0);
	}
	b = read(a, d, letters);
	close(a);
	if (b == -1)
	{
		free(d);
		return (0);
	}
	c = write(STDOUT_FILENO, d, b);
	free(d);
	if (b != c)
		return (0);
	return (c);
}
