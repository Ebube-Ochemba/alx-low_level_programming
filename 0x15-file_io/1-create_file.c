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
	int fd, len;

	if (filename == NULL) /* check file */
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1) /* check open call */
		return (-1);

	if (text_content != NULL) /* check buffer */
	{
		/* calc buffer length */
		for (len = 0; text_content[len] != '\0'; len++)
			;

		if (write(fd, text_content, len) == -1) /* Check write */
			return (-1);
	}

	close(fd);
	return (1);
}
