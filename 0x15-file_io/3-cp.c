#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 * Return: 0 on sucess
 */
int main(int ac, char **av)
{
	char buf[BUF_SIZE];
	int fd_r, fd_w;
	ssize_t read_byts, write_byts;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(av[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_w = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	read_byts = write(fd_w, buf, BUF_SIZE);
	while (read_byts > 0)
	{
		write_byts = write(fd_w, buf, read_byts);
		if (write_byts == -1)
		{	
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (read_byts == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_r) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_r);
		exit(100);
	}
	if (close(fd_w) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_w);
		exit(100);
	}
	return (0);
}
