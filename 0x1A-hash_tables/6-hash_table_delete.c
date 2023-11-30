#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 * This function deletes a hash table and frees all the memory
 * associated with it, including the nodes and the array.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;
hash_node_t *next;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
next = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = next;
}
}
free(ht->array);
free(ht);
}
