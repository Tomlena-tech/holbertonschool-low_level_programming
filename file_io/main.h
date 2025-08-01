#ifndef MAIN_H_
#define MAIN_H_



#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>



ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int exit_code, const char *format, ...);


#endif
