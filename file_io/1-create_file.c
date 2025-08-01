#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - creates a file and writes text content to it
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

int file_des; 
ssize_t bytes_written;
size_t content_lengh = 0;

if (filename == NULL)
return (-1);

    file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    
    if (file_des == -1)
        return (-1);
    
    if (text_content == NULL)
    {
        close(file_des);
        return (1);
    }
   content_lengh = strlen(text_content);
     
    bytes_written = write(file_des, text_content, content_lengh);
    
    close(file_des);
    
    if (bytes_written == -1 || (size_t) bytes_written != content_lengh)
        return (-1);
    
    return (1);
}
