#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * exitWithError - function for error
 * @error_message: error string message
 * @exit_code: exits program
 */

void exitWithError(const char *error_message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}
/**
 * openFile - A function that open file
 * @file_path: path to the file we want ot read from or write into it
 * @flags: flags
 * @mode: file permisson
 **/

int openFile(const char *file_path, int flags, int mode)
{
	int fd = open(file_path, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_path);
		exit(98);
	}
	return (fd);
}

/**
 * closeFile - close file
 * @fd: fd no:
 */

void closeFile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main program
 * @argc: no: of argument
 * @argv: array
 * Return: 0 Success
 **/

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = openFile(file_from, O_RDONLY, 0600);
	int fd_to = openFile(file_to,
	            O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		exitWithError("Usage: cp file_from file_to", 97);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (fd_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO,
			        "Error: Can't write to destination file %s\n", file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO,
		                "Error: Can't read from source file %s\n", file_from);
		exit(98);
	}

	closeFile(fd_from);
	closeFile(fd_to);

	return (0);
}

