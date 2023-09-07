#include "main.h"

/**
* read_textfile - reads a text file and prints the letters.
* @filename: name of file in the same directory.
* @letters: numbers of letters to be printed.
* Return: numbers of letters printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_to_read, num_to_write;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	num_to_read = read(fd, buffer, letters);
	num_to_write = write(STDOUT_FILENO, buffer, num_to_read);

	close(fd);

	free(buffer);

	return (num_to_write);
}
