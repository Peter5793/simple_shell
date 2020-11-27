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

 
/**struct in_built - runs in built commands within the shell
 *@command: input commands
 *@f: function pointer to execute command
 */

typedef struct in_built
{
  char *command;
  int(*f) (char **args);
}in_built_t;
  

/*function prototypes*/

{
  char *_read_line(void);
  int _execute(char **args);
  void _loop(void);
  char **_split_line(char *line);
  int _launch(char **args);
}
#endif
