//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//#include "2DFSGraph.h"
//#include "2ArrayBaseStack.h"
//
//enum visitInfo {notyet, visit};
//int WhoIsPrecede(int d1, int d2) {
//	if (d1 < d2) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//
//void GraphInit(Graph* pg,int numV) {
//	pg->NumEdge = 0;
//	pg->NumVertex = numV;
//	pg->adjList = (List*)malloc(sizeof(List)*numV);
//	pg->visitInfo = (int*)malloc(sizeof(int)*numV);
//	for (int i = 0; i < numV; i++) {
//		ListInit(&(pg->adjList[i]));
//		SetSortRule(&(pg->adjList[i]), WhoIsPrecede);
//	}
//	memset(pg->visitInfo, 0, sizeof(int)*numV);
//
//}
//void GraphDestroy(Graph* pg) {
//	if (pg->adjList != NULL){
//		free(pg->adjList);
//	}
//	if (pg->visitInfo != NULL) {
//		free(pg->visitInfo);
//	}
//}
//void AddEdge(Graph* pg, int fromV, int toV) {
//	LInsert(&(pg->adjList[fromV]), toV);
//	LInsert(&(pg->adjList[toV]), fromV);
//	
//	(pg->NumEdge)++;
//}
//void ShowEdgeInfo(Graph* pg) {
//	int i;
//	int data;
//	for (i = 0; i < pg->NumVertex; i++) {
//		printf("%c와 연결된 vertex", i + 65);
//		if (LFirst(&(pg->adjList[i]), &data)) {
//			printf("%c  ", data + 65);
//			while (LNext(&(pg->adjList[i]), &data)) {
//				printf("%c  ", data + 65);
//			}
//		}
//		printf("\n");
//	}
//}
//
//int VisitVertex(Graph* pg, int vertex) {
//	if (pg->visitInfo[vertex] == notyet) {
//		pg->visitInfo[vertex] = visit;
//		printf("%c를 방문함  ", vertex + 65);
//		return TRUE;
//	}
//	return FALSE;	
//}
//void DFSShowVertexInfo(Graph* pg, int startV) {
//	Stack stack;
//	
//	int visitV = startV;
//	int nextV;
//	StackInit(&stack);
//	VisitVertex(pg, startV);
//	SPush(&stack, startV);
//
//	while (LFirst(&(pg->adjList[visitV]), &nextV)) {
//		int visitFlag = FALSE;
//
//		if (VisitVertex(pg, nextV) == TRUE) {
//			SPush(&stack, visitV);
//			visitV = nextV;
//			visitFlag = TRUE;
//		}
//		else {
//			while (LNext(&(pg->adjList[visitV]), &nextV)) {
//				if (VisitVertex(pg, nextV) == TRUE) {
//					SPush(&stack, visitV);
//					visitV = nextV;
//					visitFlag = TRUE;
//					break;
//				}
//			}
//		}
//
//		if (visitFlag == FALSE) {
//			if (SIsEmpty(&stack)) {
//				break;
//			}
//			else {
//				visitV = SPop(&stack);
//			}
//		}
//	}
//
//	memset(pg->visitInfo, 0, sizeof(int)*pg->NumVertex);
//}