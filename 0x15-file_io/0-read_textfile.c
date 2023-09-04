#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include "main.h"

/**
* read_textfile -  a function that reads a text file and prints
* it to the POSIX standard output.
* @filename: 
* @letters: letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* Return: 0 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t fd, wr, rd;
    char *buff;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);

    if (fd == -1)
       return (0);

    buff = (char *)malloc(sizeof(char) * letters + 1);
    
    while ((rd = read(fd, buff, letters)) > 0)
    { 
        wr = write(STDOUT_FILENO, buff, rd);
        free(buff);
        if (wr == -1) 
            close(fd);
    }

    if (rd == -1) 
        close(fd);

    free(buff);
    close(fd);

    return(wr);
}