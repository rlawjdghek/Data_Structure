//#include <stdio.h>
//#include <stdlib.h>
//#include "2ALGraph.h"
//
//int WhoIsPrecede(int d1, int d2) {
//	if (d1 < d2) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//
//void GraphInit(Graph* pg, int numV) {
//	pg->adjList = (List*)malloc(sizeof(List)*numV);
//	for (int i = 0; i < numV; i++) {
//		ListInit(&(pg->adjList[i]));
//		SetSortRule(&(pg->adjList[i]), WhoIsPrecede);
//	}
//	pg->NumofEdge = 0;
//	pg->NumofVertex = numV;
//}
//void AddEdge(Graph* pg, int fromV, int toV) {
//	LInsert(&(pg->adjList[fromV]), toV);
//	LInsert(&(pg->adjList[toV]), fromV);
//	(pg->NumofEdge)++;
//}
//void DestroyGraph(Graph* pg) {
//	if (pg->adjList != NULL) {
//		free(pg->adjList);
//	}
//}
//void ShowEdgeGraph(Graph* pg) {
//	LData data;
//	for (int i = 0; i < pg->NumofVertex; i++) {
//		printf("%c와 연결된 정점 : ", i + 65);
//		if(LFirst(&(pg->adjList[i]), &data)) {
//			printf("%c  ", data + 65);
//			while (LNext(&(pg->adjList[i]), &data)) {
//				printf("%c  ", data + 65);
//			}
//		}
//		printf("\n");
//	}
//}
//
//
