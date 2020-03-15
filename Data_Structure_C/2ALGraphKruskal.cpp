//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "2ALGraphKruskal.h"
//#include "2ArrayBaseStack.h"
//
//int WhoIsprecede(int d1, int d2) {
//	if (d1 > d2) {
//		return FALSE;
//	}
//	return TRUE;
//}
//int WeightDescendingOrder(EDGE e1, EDGE e2) {
//	return e1.weight - e2.weight;
//}
//
//void GraphInit(ALGraph* pg, int numV) {
//	pg->NumOfEdge = 0;
//	pg->NumOfVertex = numV;
//	
//	pg->AdjList = (List*)malloc(sizeof(List)*numV);
//	for (int i = 0; i < numV; i++) {
//		ListInit(&(pg->AdjList[i]));
//		SetSortRule(&(pg->AdjList[i]), WhoIsprecede);
//	}
//	pg->VisitInfo = (int*)malloc(sizeof(int)*numV);
//	memset(pg->VisitInfo, 0, sizeof(int)*numV);
//	PQueueInit(&(pg->pqueue), WeightDescendingOrder);
//}
//
//void GraphDestroy(ALGraph* pg) {
//	if (pg->AdjList != NULL) {
//		free(pg->AdjList);
//	}
//	if (pg->VisitInfo != NULL) {
//		free(pg->VisitInfo);
//	}
//}
//
//
//void AddEdge(ALGraph* pg, int fromV, int toV, int weight) {
//	EDGE newedge = { fromV, toV, weight };
//	LInsert(&(pg->AdjList[fromV]), toV);
//	LInsert(&(pg->AdjList[toV]), fromV);
//	(pg->NumOfEdge)++;
//
//	EnPQueue(&(pg->pqueue), newedge);
//}
//void RemoveWayEdge(ALGraph* pg, int fromV, int toV) {
//	int nextV;
//	if (LFirst(&(pg->AdjList[fromV]), &nextV)) {
//		if (nextV == toV) {
//			LRemove(&(pg->AdjList[fromV]));
//			return;
//		}
//		while (LNext(&(pg->AdjList[fromV]),&nextV)){
//			if (nextV == toV) {
//				LRemove(&(pg->AdjList[fromV]));
//				break;
//			}
//		}
//	}
//	printf("찾는 대상이 연결되어있지 않음");
//	return;
//}
//void RemoveEdge(ALGraph* pg, int fromV, int toV) {
//	RemoveWayEdge(pg, fromV, toV);
//	RemoveWayEdge(pg, toV, fromV);
//	(pg->NumOfEdge)--;
//}
//
//void RecoverEdge(ALGraph* pg, int fromV, int toV) {
//	LInsert(&(pg->AdjList[fromV]), toV);
//	LInsert(&(pg->AdjList[toV]), fromV);
//
//	(pg->NumOfEdge)++;
//}
//
//void ShowGraphEdgeInfo(ALGraph* pg) {
//	int nextV;
//	for (int i = 0; i < pg->NumOfVertex; i++) {
//		printf("%c와 연결된 vertex : ", i+65);
//		if (LFirst(&(pg->AdjList[i]), &nextV)) {
//			printf("%c ", nextV + 65);
//			while (LNext(&(pg->AdjList[i]), &nextV)) {
//				printf("%c ", nextV + 65);
//			}
//		}
//		printf("\n");
//	}
//}
//
//void ShowVertexWeightInfo(ALGraph* pg) {
//	EDGE edge;
//	while (!PQIsEmpty(&(pg->pqueue))) {
//		edge = DePQueue(&(pg->pqueue));
//		printf("%c와 %c의 edge 가중치  : %d", edge.v1+65, edge.v2+65, edge.weight);
//	}
//} 
//int VisitVertex(ALGraph* pg, int visitV) {
//	if (pg->VisitInfo[visitV] == 0) {
//		pg->VisitInfo[visitV] = 1;
//		return TRUE;
//	}
//	return FALSE;
//}
//int IsConnectVertice(ALGraph* pg, int fromV, int toV) {
//	int nextV;
//	Stack stack;
//	StackInit(&stack);
//	int visitV = fromV;
//	VisitVertex(pg, visitV);
//	SPush(&stack, visitV);
//
//	while (LFirst(&(pg->AdjList[visitV]), &nextV)) {
//		int visitFlag = FALSE;
//
//		if (nextV == toV) {
//			memset(pg->VisitInfo, 0, sizeof(int)*pg->NumOfVertex);
//			return TRUE;
//		}
//
//		if (VisitVertex(pg, nextV)) {
//			SPush(&stack, visitV);
//			visitV = nextV;
//			visitFlag = TRUE;
//		}
//
//		else {
//			while (LNext(&(pg->AdjList[visitV]), &nextV)) {
//				if (nextV == toV) {
//					memset(pg->VisitInfo, 0, sizeof(int)*pg->NumOfVertex);
//					return TRUE;
//				}
//
//				if (VisitVertex(pg, nextV)) {
//					SPush(&stack, visitV);
//					visitV = nextV;
//					visitFlag = TRUE;
//					break;
//				}
//			}
//		}
//
//
//		if (visitFlag == FALSE) {
//			if (SIsEmpty(&stack)) {
//				return FALSE;
//			}
//
//			else {
//				visitV = SPop(&stack);
//			}
//		}
//	}
//
//	memset(pg->VisitInfo, 0, sizeof(int) * pg->NumOfVertex);
//	return FALSE;
//}
//
//
//
//void ConKruskalMST(ALGraph* pg) {
//	EDGE edge;
//	
//	while (pg->NumOfEdge + 1 > pg->NumOfVertex) {
//		edge = DePQueue(&(pg->pqueue));
//		RemoveEdge(pg, edge.v1, edge.v2);
//		if (!IsConnectVertice(pg, edge.v1, edge.v2)) {
//			RecoverEdge(pg, edge.v1, edge.v2);
//
//		}
//	}
//}
//
