#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
* append_text_to_file -  a function that appends text at the end of a file.
* @filename: File  destination
* @text_content: File  source
* Return: Return 1 if the file exists 
* and -1 if the file does not exist or if you do not 
* have the required permissions to write the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, wr, i;

    if (filename == NULL)
        return (-1);

    /**
    * if (text_content != NULL)
    {
        i = 0;
        while (text_content[i] != '\0')
           i++;
    }
    */
    if (text_content != NULL)
    {
        for (i = 0; text_content[i])
            i++;
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    wr = write (fd, text_content, i);

    if (fd == -1 || wr == -1)
        return (-1);

    close(fd);
    return (1);

}
