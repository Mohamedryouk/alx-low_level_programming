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
	int write_content;
	int read_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	/*if the text content is equal to null*/
	if (!text_content)
		text_content = "";

	for (write_content = 0; text_content[write_content]; write_content++)
		;

	/*then we write the content to the file*/
	read_write = write(fd, text_content, write_content);
	if (read_write == -1)
		return (-1);
	close(fd);
	return (1);
}
