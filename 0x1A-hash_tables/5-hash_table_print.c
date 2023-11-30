#include "hash_tables.h"
/**
 * hash_table_print - Prints all the key-value pairs in a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;
int flag = 0;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
flag = 1;
temp = temp->next;
}
}
printf("}\n");
}
