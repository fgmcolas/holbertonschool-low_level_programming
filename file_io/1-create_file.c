#include "main.h"

/**
 * create_file - Create a file with the given filename
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten;
	int fileDescriptor;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fileDescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
	bytesWritten = write(fileDescriptor, text_content, strlen(text_content));
			if (bytesWritten == -1)
			close(fileDescriptor);
			return (-1);
	}
	close(fileDescriptor);
	return (-1);
}
