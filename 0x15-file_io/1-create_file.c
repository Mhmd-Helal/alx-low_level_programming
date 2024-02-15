#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on sucess -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int i;

	for (i = 0; text_content[i] != '\0'; i++)
	{
		len++;
	}
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT, 00400 | 00200);
	if (fd == -1)
		return (-1);
	if (write(fd, text_content, len) == -1)
		return (-1);
	return (1);
}
