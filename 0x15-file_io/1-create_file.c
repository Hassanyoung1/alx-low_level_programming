#include "main.h"
/**
 *create_file - function that creates a file.
 *@filename: name of the file
 *@text_content: content of the file
 *Return: -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			if (write(fd, text_content, len) != len)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}
