#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
* create_file - Create a function that creates a file.
* @filename: File  destination
* @text_content: File  source
* Return: Returns: 1 on success, -1 on failur
*/

int create_file(const char *filename, char *text_content)
{
    int fd, wr, i;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        i = 0;
        while (text_content[i] != '\0')
            i++;
    }

    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    wr = write(fd, text_content, i);

    if (fd == -1 || wr == -1)
        return (-1);

    close(fd);
    return (1);

}