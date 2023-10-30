#include "main.h"
/**
 * create_file- function to create files
 * @filename: pointer to texts of a file
 * @text_content: pointer to prints the content
 * Return: returns -1 if fail or its NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_content;
	char buffer[1024];
	int i = 0;

	if (!filename)
		return (0);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	/*if the text content is equal to null*/
	if (text_content || text_content[0] == '\0')
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0' && i < 1023)
	{
		buffer[i] = text_content[i];
		i++;
	}
	buffer[i] = '\0';
	/*then we write the content to the file*/
	write_content = write(fd, buffer, i);
	if (write_content == -1 || write_content != i)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
