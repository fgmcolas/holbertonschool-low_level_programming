#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The file name
 * @text_content: The NULL terminated string to add at the end
 * Return: 1 if success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	int len;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);

	if (fileDescriptor == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	if (text_content != NULL)
	{
		bytesWritten = write(fileDescriptor, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			return (-1);
		}
	}

	close(fileDescriptor);
	return (1);
}
