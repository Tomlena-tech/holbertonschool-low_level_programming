#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Programme qui copie le contenue d'un fichier
*	 vers un aurtres fichier.
* @argc: Nombres d'arguments
* @argv: Chaine de caractere des arguments.
* Return: 0
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
char tab[1024];
int num = 1024, num2 = 0;
if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage cp file_from file_to\n"), exit(97);
	}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	 | S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[2]);
	close(file_from), exit(99);
	}
while (num == 1024)
	{
	num = read(file_from, tab, 1024);
	if (num == -1)
		{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
		exit(98);
		}
	num2 = write(file_to, tab, num);
	if (num2 < num)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
if (close(file_from) == 1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
if (close(file_to) == 1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
return (0);
}

