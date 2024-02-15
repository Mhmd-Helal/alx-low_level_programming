#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on sucess -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len))
			return (-1);
	}
	if (close(fd))
		return (-1);
	return (1);
}
