#include <unistd.h>
#include "main.h"

/**
  * _putchar - write the character x to stdout
  *
  * Return: on success 1, on error -1 is returned
  */

int _putchar(char x)
{
        return (write(1, &x, 1));
}
~         
