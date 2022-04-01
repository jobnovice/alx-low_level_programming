#include "main.h"
/**
 * _puts_recursion - the main function
 *@s: the charcter array
 * Return:nada
 */
 void _puts_recursion(char *s)
 {
    int i;

    if (s[i] != '\0')
     {
        putchar(s[i]);
        _puts_recursion(s[i+1]);
     }
     else
        _putchar('\n');
 }