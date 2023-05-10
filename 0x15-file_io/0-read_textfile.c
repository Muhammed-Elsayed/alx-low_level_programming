#include "main.h"

#include <stdlib.h>

/**
 * read_textfile - Reads a text file
 * @filename: A ptr.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL.
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t j, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);





	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);


	j = open(filename, O_RDONLY);
	r = read(j, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (j == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}


	free(buffer);
	close(j);


	return (w);
}
