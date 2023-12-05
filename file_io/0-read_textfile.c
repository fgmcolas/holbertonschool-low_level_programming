#include "main.h"

/**
 * read_textfile - Reads a text tile and print it
 * @filename: The name of the file
 * @letters: The number of letters to read and print
 * Return:	The actual number of letters read and printed
 *		If the file can't be opened,
 *		read or if there are issues with writing : return 0
 *
 *		If the filename is NULL : return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead;
	ssize_t bytesWritten;
	int fileDescriptor;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead == -1)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}

	close(fileDescriptor);
	free(buffer);
	return (bytesRead);
}
