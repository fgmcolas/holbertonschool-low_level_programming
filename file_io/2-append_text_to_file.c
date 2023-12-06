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
	int bytesWritten;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);

	if (fileDescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;

		bytesWritten = write(fileDescriptor, text_content, len);

		if (bytesWritten == -1)
			return (-1);
	}

	close(fileDescriptor);
	return (1);
}
