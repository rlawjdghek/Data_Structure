//#ifndef _D_LINKEDLIST_H_
//#define _D_LINKEDLIST_H_
//#include "2Slot.h"
//
//#define TRUE 1
//#define FALSE 0
//
//typedef int LData;
//
//
//typedef struct _node {
//	LData data;
//	struct _node* next;
//}Node;
//
//typedef struct _list {
//	Node* head;
//	Node* cur;
//	Node* before;
//	int NumOfData;
//	int (*comp)(LData data1, LData data2);
//}LinkedList;
//
//typedef LinkedList List;
//
//void ListInit(List* plist);
//void LInsert(List* plist, LData pdata);
//
//int LFirst(List* plist, LData* data);
//int LNext(List* plist, LData* data);
//
//LData LRemove(List* plist);
//int LCount(List* plist);
//
//void SetSortRule(List* plist, int(*comp)(LData data1, LData data2));
//
//
//
//#endif // !_D_LINKEDLIST_H_
