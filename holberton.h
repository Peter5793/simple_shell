#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/wait.h>
#include <readline/history.h>
#define MAXCOM 1000 // max number of letters to be supported
#define MAXLIST 100 // max number of commands to be supported

// Clearing the shell using escape sequences
#define clear() printf("\033[H\033[J") 
/** 
<<<<<<< HEAD
 *make a function that would initialize shell program
 *write down an algorithm
 *we a struct that allows us create commands

 */
int input(char *str);
#endif
=======
 *struct in_built - runs in built commands within the shell
 *@command: input commands
 *@f: function pointer to execute command
 */

typedef struct in_built
{
  char *command;
  int(*f) (char **args);
}in_built_t
  

/*function prototypes*/
#define LSH_RL_BUFSIZE 1024
 #define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

{
  int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
 int lsh_num_builtins();
 int lsh_launch(char **args);
 int lsh_execute(char **args);
 char *lsh_read_line(void);
 void lsh_loop(void)
  
}
>>>>>>> 50f10e6de4c832c7cfe595df29f811261b1460b6
