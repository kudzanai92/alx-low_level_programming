#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_n - singly linked list
 * @str: string - (malloc'ed string)
 * @n: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_n
{
	int n;
        struct listint_n *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif    
