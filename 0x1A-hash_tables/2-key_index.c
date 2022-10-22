#include "hash_tables.h"

/**
* key_index - function to return index/hashcode of a key
* @key: key to pass to function
* @size: Size of the array of the hashtable
*
* Return: index at which the key/value pair should be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
