#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_message_beforeMain - Prints the given string before the main function.
 */
void print_message_beforeMain()
{
	list_t *head;
	list_t *firstnode;
	list_t *secondnode;
	list_t *thirdnode;

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	head = NULL;
	firstnode = malloc(sizeof(list_t));
	secondnode = malloc(sizeof(list_t));
	thirdnode = malloc(sizeof(list_t));

	firstnode->str = "Hello";
	firstnode->len = 5;
	secondnode->str = "World";
	secondnode->len = 5;
	thirdnode->str = "!";
	thirdnode->len = 1;

	firstnode->next = secondnode;
	secondnode->next = thirdnode;
	thirdnode->next = NULL;

	head = firstnode;

	printf("Singly Linked List: ");
	print_list(head);

	free_list(head);
}
