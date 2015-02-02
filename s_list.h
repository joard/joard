#include <stdlib.h>

/*defined single list element*/
typedef struct ListElement_{
	void *data;
	struct ListElement_ *next;
}ListElement;

/*defined single list*/
typedef struct List_{
	ListElement *head;
	ListElement *tail;
	int size;
}List;

/*defined public interface*/
/*init*/
int list_init(List *list);
/*insert*/
int list_ins_next(List *list,ListElement *element,void *data);
/*remove*/
int list_rem_next(List *list,ListElement *element,(void**)data);

#defined list_size(list) ((list)->size)
#defined list_head(list) ((list)->head)
#defined list_tail(list) ((list)->tail)
#defined element_is_head(list,element) (element == ((list)->head)?1:0)
#defined element_is_tail(element) (((element)->next == NULL)?1:0)
#defined list_data(element) ((element)->data)
#defined list_next(element) ((element)->next)