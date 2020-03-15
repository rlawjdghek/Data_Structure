//
//#include "2UsefulHeap.h"
//
//
//
//void HeapInit(Heap* ph, Prioritycomp pc) {
//	ph->comp = pc;
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
//int GetHighPriorityIDX(Heap* ph, int idx) {
//	if (GetLeftChildIDX(idx) > ph->NumofData) {
//		 
//		return 0;
//	}
//	else if (GetLeftChildIDX(idx) == ph->NumofData) {
//		return GetLeftChildIDX(idx);
//	}
//	else {
//		if (ph->comp(ph->heapArr[GetLeftChildIDX(idx)], ph->heapArr[GetRightChildIDX(idx)]) > 0) {
//			return GetLeftChildIDX(idx);
//		}
//		else {
//			return GetRightChildIDX(idx);
//		}
//	}
//
//}
//void HInsert(Heap* ph, HData data) {
//	int findidx = ph->NumofData + 1;
//
//	while (findidx != 1) {
//		if (ph->comp(data, ph->heapArr[GetParentIDX(findidx)])>0) {
//			ph->heapArr[findidx] = ph->heapArr[GetParentIDX(findidx)];
//			findidx = GetParentIDX(findidx);
//		}
//		else {
//			break;
//		}
//	}
//	ph->heapArr[findidx] = data;
//	(ph->NumofData)++;
//
//}
//HData HDelete(Heap* ph) {
//	HData rdata = ph->heapArr[1];
//	HData lastdata = ph->heapArr[ph->NumofData];
//
//	int findidx = 1;
//	int childidx;
//	while (childidx = GetHighPriorityIDX(ph, findidx)) {
//		if (ph->comp(lastdata, ph->heapArr[childidx]) >= 0) {
//			break;
//		}
//		ph->heapArr[findidx] = ph->heapArr[childidx];
//		findidx = childidx;
//	}
//	ph->heapArr[findidx] = lastdata;
//	(ph->NumofData)--;
//	return rdata;
//}
//
