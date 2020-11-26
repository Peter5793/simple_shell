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
 *make a function that would initialize shell program
 *write down an algorithm
 *we a struct that allows us create commands

 */
int input(char *str);
#endif
