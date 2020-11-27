#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/wait.h>
#define MAXCOM 1000 // max number of letters to be supported
#define MAXLIST 100 // max number of commands to be supported

 

/*function prototypes**/
{
int lsh_cd(char **args);
int lsh_help(char *);
int lsh_exit(char *);

 char *_read_line(void);
int _execute(char **args);
void _loop(void);
char **_split_line(char *line);
int _launch(char **args);
int lsh_num_builtins(void);
int lsh_num_builtins();
char *builtin_str[];
int lsh_num_builtins();
int (*builtin_func[]) (char **);
}
#endif
