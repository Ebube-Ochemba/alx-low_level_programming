#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to be created.
 * @text_content: A string(buffer) to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, written;

	if (filename == NULL) /* check file */
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1) /* check open call */
		return (-1);

	if (text_content == NULL) /* check buffer */
	{
		close(fd);
		return (1);
	}
	/* calc buffer length */
	for (len = 0; text_content[len] != '\0'; len++)
		;

	written = write(fd, text_content, len); /* write */
	if (written == -1 || written != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
