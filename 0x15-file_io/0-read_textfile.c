#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: file to read
 * @letters: store the number of letters
 * Return: total letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char buffer[1024];
	ssize_t total_read = 0, num_read;

	while (total_read < letters &&
		(num_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(STDOUT_FILENO, buffer, num_read) != num_read)
		{
			close(fd);
			return (0);
		}
		total_read += num_read;
	}

	close(fd);
	return (total_read);
}
