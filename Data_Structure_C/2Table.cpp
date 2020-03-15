//#include <stdio.h>
//#include "2Table.h"
//
//
//void TableInit(Table* tb, HashFunc* hff) {
//	tb->hf = hff;
//	for (int i = 0; i < MAX_TBL; i++) {
//		ListInit(&(tb->tabl[i]));
//	}
//}
//Value TSearch(Table* tb, Key k) {
//	int output = tb->hf(k);
//	Slot data;
//	if (LFirst(&(tb->tabl[output]), &data)) {
//		if (data.key == k) { return data.value; }
//		else {
//			while (LNext(&(tb->tabl[output]), &data)) {
//				if (data.key == k) {
//					return data.value;
//				}
//			}
//		}
//	}
//	printf("asd");
//	return NULL;
//}
//
//
//void TInsert(Table* tb, Key k, Value v) {
//	int output = tb->hf(k);
//	Slot newslot = { k, v };
//	if (TSearch(tb, k) != NULL) {
//		printf("중복오류");
//
//	}
//	else {
//		LInsert(&(tb->tabl[output]), newslot);
//	}
//}
//Value TDelete(Table* tb, Key k) {
//	int output = tb->hf(k);
//	LData data;
//	if (LFirst(&(tb->tabl[output]), &data) != TRUE) {
//		printf("아무것도 없음");
//		return NULL;
//	}
//	else {
//		if (data.key == k) {
//			LRemove(&(tb->tabl[output]));
//			return data.value;
//		}
//		else {
//			while (LNext(&(tb->tabl[output]), &data)) {
//				if (data.key == k) {
//					LRemove(&(tb->tabl[output]));
//					return data.value;
//				}
//			}
//			printf("찾는데이터없음");
//			return NULL;
//		}
//	}
//
//}