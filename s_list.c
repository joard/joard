#include <stdlib.h>
#include "s_list.h"

int list_init(List *list)
{
	list->size = 0;
	list->head = NULL;
	list->tail = NULL;
	return 0;
}

int list_ins_next(List *list,ListElement *element,void *data)
{
	
}
