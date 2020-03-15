//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//#include "2SimpleHeap.h"
//
//
//void HeapInit(Heap* ph) {
//	ph->NumofData = 0;
//}
//int HIsEmpty(Heap* ph) {
//	if (ph->NumofData == 0) {
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//
//int GetParentIDX(int idx) {
//	return idx / 2;
//}
//int GetRightChildIDX(int idx) {
//	return (idx * 2)+1;
//}
//int GetLeftChildIDX(int idx) {
//	return idx * 2 ;
//}
//
//int GetHighPriorityIDX(Heap* ph,int idx) {
//	if (GetLeftChildIDX(idx) > ph->NumofData) {
//		printf("¾øÀ½");
//		return 0;
//	}
//	else if (GetLeftChildIDX(idx) == ph->NumofData) {
//		return GetLeftChildIDX(idx);
//	}
//	else {
//		if (ph->HearArr[GetLeftChildIDX(idx)].pr > ph->HearArr[GetRightChildIDX(idx)].pr) {
//			return GetRightChildIDX(idx);
//		}
//		else {
//			return GetLeftChildIDX(idx);
//		}
//	}
//}
//
//void HInsert(Heap* ph, HData newdata, Priority newpr) {
//	int findidx = (ph->NumofData) + 1;
//	Element newelem = { newpr, newdata };
//	while (findidx >1) {
//		if (ph->HearArr[GetParentIDX(findidx)].pr <= newpr) {
//			break;
//		}
//		else {
//			ph->HearArr[findidx] = ph->HearArr[GetParentIDX(findidx)];
//			findidx = GetParentIDX(findidx);
//		}
//	}
//	ph->HearArr[findidx] = newelem;
//	(ph->NumofData)++;
//
//}
//HData HDelete(Heap* ph) {
//	HData rdata = ph->HearArr[1].data;
//	Element lastElem = ph->HearArr[ph->NumofData];
//	int findidx = 1;
//
//	while (findidx < ph->NumofData - 1) {
//		if (ph->HearArr[GetHighPriorityIDX(ph,findidx)].pr < lastElem.pr) {
//			ph->HearArr[findidx] = ph->HearArr[GetHighPriorityIDX(ph, findidx)];
//			findidx = GetHighPriorityIDX(ph, findidx);
//
//		}
//		else {
//			break;
//		}
//	}
//	ph->HearArr[findidx] = lastElem;
//	(ph->NumofData)--;
//	return rdata;
//
//}
