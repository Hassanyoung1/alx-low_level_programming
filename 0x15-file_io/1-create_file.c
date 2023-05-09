#include "main.h"

/**
 *create_file - Creates a file.
 *@filename: A pointer to name of the file to be created.
 *@text_content: A pointer to a string to write to the file.
 *
 *Return: If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_file, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(fd, text_content, length);

	if (fd == -1 || write_file == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
