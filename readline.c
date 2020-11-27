#include "holberton.h"
/**
 * _read_line - read line from stndard input
 * Return: pointer to line
 */
char *_read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;
	ssize_t res;
	/* getline to allocate a buffe */
	res = getline(&line, &bufsize, stdin);
	if (res == -1)
	{
		if (feof(stdin))
		{
		  /*Receive an EOF*/
			exit(EXIT_SUCCESS);
			}
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
