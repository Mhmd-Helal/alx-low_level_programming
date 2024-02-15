#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read from file
 * @filename: name file that read from
 * @letters: count of bytes that readed
 * Return: count of bytes that can be readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int nr, nw;
	char *buf;

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	nr = read(fd, buf, letters);
	if (nr < 0)
		return (0);
	nw = write(1, buf, nr);
	if (nw < 0)
		return (0);
	if (close(fd) < 0)
		return (0);
	free(buf);
	return (nw);
}
