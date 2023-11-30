#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash
 * table, or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table = NULL;
hash_node_t **new_array = NULL;
unsigned long int i = 0;
new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);
new_array = malloc(sizeof(hash_node_t *) * size);
if (new_array == NULL)
{
free(new_table);
return (NULL);
}
while (i < size)
{
new_array[i] = NULL;
i++;
}
new_table->size = size;
new_table->array = new_array;
return (new_table);
}
