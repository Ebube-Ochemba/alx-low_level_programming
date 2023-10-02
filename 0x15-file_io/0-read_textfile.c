#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX STD O.
 * @filename: The name of the file which you want to access.
 * @letters: The number of letters to be read and printed.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_letters, written_letters;

	if (filename == NULL) /* check file */
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1) /* check open call */
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* check buffer */
		return (0);

	read_letters = read(fd, buffer, letters); /* read */
	if (read_letters == -1) /* check read call */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written_letters = write(STDOUT_FILENO, buffer, read_letters); /* write */
	if (written_letters == -1) /* check write call */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (read_letters);
}
