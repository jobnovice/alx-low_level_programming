#include <stdlib.h>

/**
 * print_list - entry pint 
 * @h: a linked list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
    const list_t *temp = new list_t();
    temp = h;
    size_t nodes = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        nodes++
    }
    return nodes;
}