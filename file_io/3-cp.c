#include "main.h"

/**
 * main - Copy the content of a file to another file
 * @argc: Argument Count
 * @argv: Argument Value
 * Return:	on success :		0
 *		incorrect arguments :	97
 *		read error :		98
 *		write error :		99
 *		close error :		100
 */

int main(int argc, char *argv[])
{
	int fdTo, fdFrom, bytesWritten, bytesRead;
	char buffer[1024];
	char *file_from = argv[1], *file_to = argv[2];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fdFrom = open(file_from, O_RDONLY);
	if (fdFrom == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdTo = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdTo == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytesRead = read(fdFrom, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(fdTo, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fdFrom) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdFrom);
		exit(100);
	}
	if (close(fdTo) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdTo);
		exit(100);
	}
	return (0);
}
