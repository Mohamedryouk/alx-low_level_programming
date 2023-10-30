#include "main.h"
/**
 * read_textfile- reads the text file and print its posix.
 * @filename: pointer to the content of the file.
 * @letters: struct member.
 * Return: return 0 if null or if not opened or it failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rcount, wcount;
	int fm;
	char *buffer;

	if (filename == NULL)
		return (0);
	fm = open(filename, O_RDONLY);
	if (fm == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	rcount = read(fm, buffer, letters);
	wcount = write(STDOUT_FILENO, buffer, rcount);
	close(fm);
	free(buffer);
	return (wcount);
}
