#include "main.h"

/**
 *read_textfile - function that reads a text file
 *and prints it to the POSIX standard output.
 *@filename:name of the file
 *@letters: the number of letters to be print
 *Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int text_file, write_file;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	text_file = read(fd, buff, letters);
	if (text_file < 0)
	{
		free(buff);
		return (0);
	}
	buff[text_file] = '\0';
	close(fd);
	write_file = write(STDOUT_FILENO, buff, text_file);
	if (write_file < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (write_file);
}
