#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Ouvre un fichier pour le lire et compter
 *		   le nombre de caractere.
 *@filename: Contient la string.
 *@letters: Contient le nombre de caractere present dans le fichier
 *Return: Renvoir nombre de caractere lues et ecrits.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, index, ret;
char *text;
if (filename == NULL || letters == 0)
	{
	return (0);
	}
text = malloc(letters);
if (text == NULL)
	{
	return (0);
	}
file = open(filename, O_RDONLY);
if (file == -1)
	{
	free(text);
	return (0);
	}
index = read(file, text, letters);
ret = write(STDOUT_FILENO, text, index);
close(file);
return (ret);
}
