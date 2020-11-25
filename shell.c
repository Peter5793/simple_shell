#include "holberton.h"

/**
 *init_shell - start-up shell
 *Return: void
 */


void init_shell()
{
  
  printf("***welcome to our egg shell**\n");
  char* username = getenv("USER");
  printf("USER is: @%s", username);
  printf("\n");
  sleep(1);
  
}

int main ()
{
  init_shell();
  return (0);
}

