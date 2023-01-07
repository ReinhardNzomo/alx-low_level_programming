#include "hash_tables.h"

/**
 * key_index - index at which the key/value pair
 *              should be stored in the array of the hash table
 * @key: Key to get index of
 * @size: size of the array of the hash table
 * 
 * Return: index of key
 * 
 * Description: uses the djb2 algorithm
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
