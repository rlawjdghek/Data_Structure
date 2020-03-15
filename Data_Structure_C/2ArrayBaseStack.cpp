//#include <stdio.h>
//#include <stdlib.h>
//#include "2ArrayBaseStack.h"
//
//void StackInit(Stack* pstack) {
//	pstack->topIndex = -1;
//}
//int SIsEmpty(Stack* pstack) {
//	if (pstack->topIndex == -1) {
//		return TRUE;
//	}
//	return FALSE;
//}
//
//void SPush(Stack* pstack, Data pdata) {
//	pstack->stackarr[++(pstack->topIndex)] = pdata;
//
//}
//Data SPop(Stack* pstack) {
//	Data rdata = pstack->stackarr[pstack->topIndex];
//
//	if (SIsEmpty(pstack)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	(pstack->topIndex)--;
//	return rdata;
//}
//Data SPeek(Stack* pstack) {
//	if (SIsEmpty(pstack)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	return pstack->stackarr[pstack->topIndex];
//}
//
