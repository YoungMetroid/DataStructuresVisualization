#include <iostream>
#include "linkedList.h"
#include <stdlib.h>
#include <time.h>

int main(void)
{
	linkedList<int>* list = new  linkedList<int>();

	list->insert(1);
	list->insert(2);
	list->insert(3);
	list->insert(14);
	list->insert(15);

	srand(time(NULL));

	
	for (int counter = 0; counter < 10000; counter++)
	{
		list->insert(rand() % 10000);
	}
	


	//list->printList();
	std::cin.get();
	list->bubbleSort();
	list->printList();
	std::cin.get();	
	return 0;
}