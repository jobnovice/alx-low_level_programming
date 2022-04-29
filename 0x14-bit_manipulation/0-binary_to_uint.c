#include "main.h"
#include <stdio.h>
#include <math.h>
unsigned int binary_to_uint(const char *b)
{
    unsigned int i,n=0;

    if (*b == '\0')
        return 0;
    for (i=0; b[i]!='\0'; i++)
    {
        if(b[i] != '0' || b[i] !=  '1')
            return 0;
    }
    for (i=0;b[i]!='\0';i++)
    {
        if(b[i] == '0')
           n+= 2^i * 0;
        else 
            n+= 2^i * 1;
    }
    return n;
}
