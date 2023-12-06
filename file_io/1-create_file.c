#include "main.h"

/**
 * create_file - Create a file with the given filename
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	int bytesWritten;
	int contentLength = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (contentLength = 0; text_content[contentLength];)
			contentLength++;
	}

	fileDescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytesWritten = write(fileDescriptor, text_content, contentLength);

	if (fileDescriptor == -1 || bytesWritten == -1)
		return (-1);

	close(fileDescriptor);
	return (1);
}
