#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of array
 * Return: NULL in case of error; otherwise, pointer to new hash table
 * 
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *h;
    unsigned long int i;

    h = malloc(sizeof(hash_table_t));
    if (h == NULL)
        return (NULL);

    h->size = size;
    h->array = malloc(sizeof(hash_node_t *) * size);
    if (h->array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
    {
        h->array[i] = NULL;
    }

    return (h);
}
