#include <stdio.h>

#define PERMISSION 0664
/**
* file_error - function to check if files can be opened.
* @file_from: file_from.
* @file_to: file_to.
* @argv: arguments.
*/

void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - program starts here.
* @argc: argument count.
* @argv: arguments.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t num_chars, n_w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, PERMISSION);
	file_error(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buf, 1024);
		if (num_chars == -1)
			file_error(-1, 0, argv);
		n_w = write(file_to, buf, num_chars);
		if (n_w == -1)
			file_error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
