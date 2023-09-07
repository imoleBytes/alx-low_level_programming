#include "main.h"

/**
* append_text_to_file - appends text to a file.
* @filename: name of file.
* @text_content: content to be added.
*
* Return: 1 if the file exists. -1 if the file does not exist or fails.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int content_lenght;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (content_lenght = 0; text_content[content_lenght]; content_lenght++)
			;

		w = write(fd, text_content, content_lenght);

		if (w == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
