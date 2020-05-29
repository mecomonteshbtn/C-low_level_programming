#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "het1");
	hash_table_set(ht, "mentioner", "men2");
	hash_table_set(ht, "heliotropes", "hel1");
	hash_table_set(ht, "neurospora", "nue2");
	hash_table_set(ht, "depravement", "dep1");
	hash_table_set(ht, "serafins", "ser2");
	hash_table_set(ht, "stylist", "sty1");
	hash_table_set(ht, "subgenera", "sub2");
	hash_table_set(ht, "joyful", "joy1");
	hash_table_set(ht, "synaphea", "syn2");
	hash_table_set(ht, "redescribed", "red1");
	hash_table_set(ht, "urites", "uri2");
	hash_table_set(ht, "dram", "dra1");
	hash_table_set(ht, "vivency", "viv2");
	return (EXIT_SUCCESS);
}
