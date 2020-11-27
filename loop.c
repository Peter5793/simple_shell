#include "holberton.h"
/**
 * _loop - function that interprets commands
 *
 * Return: Void
 */
void _loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf("$ ");
		line = _read_line();
		args = _split_line(line);
		free(line);
		free(args);
	} while (status);
}
