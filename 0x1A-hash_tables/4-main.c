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
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Jennie", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");
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


	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Jennie");
	printf("%s:%s\n", "Jennie", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "c");
	printf("%s:%s\n", "c", value);
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value);
	value = hash_table_get(ht, "hetairas");
	printf("%s:%s\n", "hetairas", value);
	value = hash_table_get(ht, "mentioner");
	printf("%s:%s\n", "mentioner", value);
	value = hash_table_get(ht, "heliotropes");
	printf("%s:%s\n", "heliotropes", value);
	value = hash_table_get(ht, "nuerospora");
	printf("%s:%s\n", "neurospora", value);
	value = hash_table_get(ht, "depravement");
	printf("%s:%s\n", "depravement", value);
	value = hash_table_get(ht, "serafins");
	printf("%s:%s\n", "serafins", value);
	value = hash_table_get(ht, "stylist");
	printf("%s:%s\n", "stylist", value);
	value = hash_table_get(ht, "subgenera");
	printf("%s:%s\n", "subgenera", value);
	value = hash_table_get(ht, "joyful");
	printf("%s:%s\n", "joyful", value);
	value = hash_table_get(ht, "synaphea");
	printf("%s:%s\n", "synaphea", value);
	value = hash_table_get(ht, "redescribed");
	printf("%s:%s\n", "redescribed", value);
	value = hash_table_get(ht, "urites");
	printf("%s:%s\n", "urites", value);
	value = hash_table_get(ht, "dram");
	printf("%s:%s\n", "dram", value);
	value = hash_table_get(ht, "vivency");
	printf("%s:%s\n", "vivency", value);
	return (EXIT_SUCCESS);
}
