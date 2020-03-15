//#include <stdio.h>
//#include "2ListBaseStack.h"
//#include <stdlib.h>
//
//
//void StackInit(Stack* pstack) {
//	pstack->head = NULL;
//}
//int SIsEmpty(Stack* pstack) {
//	if (pstack->head == NULL) {
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//void SPush(Stack* pstack, Data data) {
//	
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	newnode->next = pstack->head;
//	pstack->head = newnode;
//}
//
//
//Data SPop(Stack* pstack) {
//	if (SIsEmpty(pstack)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	Node* delnode = pstack->head;
//	Data rdata = delnode->data;
//	pstack->head = delnode->next;
//	free(delnode);
//	return rdata;
//}
//Data SPeek(Stack* pstack) {
//	if (SIsEmpty(pstack)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	return pstack->head->data;
//}
