#include "holberton.h"
/**
 * _launch - starts the process for the shell program
 *@args: parameter
 * Return: void
 */
int _launch(char **args)
{
	pid_t pid, ppid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		/*child process*/
		if (execvp(args[0], args) == -1)
		{
			perror("sh");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		/* Error forking*/
		perror("sh");
	}
	else
	{
		/**Parent process*/
		do {
			ppid = waitpid(pid, &status, WUNTRACED);
		} while (WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
