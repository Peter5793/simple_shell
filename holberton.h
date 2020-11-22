#ifndef HOLBERTON_H
#define HOLBERTON_H
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include<readline/readline.h> 
#include<readline/history.h>

/** 
 *make a function that would initialize shell program
 *write down an algorithm
 *we a struct that allows us create commands
 */

typedef struct existing
{
  char *command;
  int (*f)(char **argv);
}existing_t;

/*function prototypes*/
{
  char *read_input ();
  int simple_addition(int *f);
  (void) execute ();
  
}
