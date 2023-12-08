#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - Copies the content of one file to another
 * @from: Source file descriptor
 * @to: Destination file descriptor
 */
void copy_file(int from, int to)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes, write_bytes;

	do
	{
		read_bytes = read(from, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			perror("Error reading from file");
			exit(98);
		}

		write_bytes = write(to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			perror("Error writing to file");
			exit(99);
		}

	} while (read_bytes > 0);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		perror("Error opening source file");
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	if (fd_to == -1)
	{
		perror("Error opening destination file");
		close(fd_from);
		exit(99);
	}

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		perror("Error closing file descriptor");
		exit(100);
	}

	return (0);
}
