#include "holberton.h"
/**
 * _execute - launch a builtin or a process
 * @args: arguments to be passed in
 * Return: launched process
 */
int _execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		return (1);
	}
	for (i = 0; i < lsh_num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}
	return (_launch(args));
}
