#include "holberton.h"
/**
 * _split_line - parse file into a list of arguments
 *
 *Return: Returns a pointer to the first token found
 * in the string
 */
#define _TOK_BUFSIZE 64
#define _TOK_DELIM " \t\r\n\a"
char **_split_line(char *line)
{
	int bufsize = _TOK_BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "sh: allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strok(line, _TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		if (position >= bufsize)
		{
			bufsize += _TOK_BUFSIZE;
			tokens = realloc(tokens, bufsize * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "sh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strok(NULL, _TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}
