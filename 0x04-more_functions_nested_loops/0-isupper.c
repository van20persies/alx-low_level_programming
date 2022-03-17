#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *
 *  _isupper -  checks for uppercase character.
 *
 *  @c: c -  Variable
 *
 *  Return: Always 0.
 *
 * */

char _isupper(char c)
{
if (isupper(c))
{
return (1);
}
return (0);
}
