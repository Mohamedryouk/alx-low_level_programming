#include "main.h"
/**
 * append_text_to_file- returns them using only append mode
 * @filename: file pointer to the cntent
 * @text_content: text to be appended
 * Return: returns 1 if success and -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_content;
	int read_write;

	if (!filename)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

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
