#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
/**
 *  * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_des;
    ssize_t bytes_written;
    size_t content_length;

    if (filename == NULL)
        return (-1);
    file_des = open(filename, O_WRONLY | O_APPEND);

    if (file_des == -1)
        return (-1);
    if (text_content == NULL)
    {
        close(file_des);
        return (1);
    }
    content_length = strlen(text_content);
    bytes_written = write(file_des, text_content, content_length);
    close(file_des);
    if (bytes_written == -1 || (size_t)bytes_written != content_length)
        return (-1);

    return (1);
}
