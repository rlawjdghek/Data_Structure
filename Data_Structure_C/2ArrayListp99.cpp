//#include <stdio.h>
//#include "2ArrayListp99.h"
//#include <stdlib.h>
//
//void ListInit(List* plist) {
//	plist->curPosition = -1;
//	plist->NumOfData = 0;
//}
//void LInsert(List* plist, LData data) {
//	if (plist->NumOfData >=List_LEN) {
//		printf("저장 불가");
//		return;
//	}
//	plist->arr[plist->NumOfData] = data;
//	(plist->NumOfData)++;
//}
//LData LRemove(List* plist) {
//	LData rdata= plist->arr[plist->curPosition];
//	int rpos = plist->curPosition;
//	int num = plist->NumOfData;
//	int i;
//	for (i = rpos; i < num; i++) {
//		plist->arr[i] = plist->arr[i + 1];
//	}
//	(plist->curPosition)--;
//	(plist->NumOfData)--;
//	return rdata;
//
//}
//
//int LFirst(List* plist,LData* pdata) {
//	*pdata = plist->arr[0];
//	if (plist->NumOfData == 0) {
//		return FALSE;
//	}
//	plist->curPosition = 0;
//	return TRUE;
//}
//int LNext(List* plist, LData* pdata) {
//	if (plist->NumOfData <= plist->curPosition + 1) {
//		return FALSE;
//	}
//	(plist->curPosition)++;
//	*pdata = plist->arr[plist->curPosition];
//	return TRUE;
//}
//int LCount(List* plist) {
//	return plist->NumOfData;
//}
