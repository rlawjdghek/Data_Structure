//#include <stdio.h>
//#include "2ALGraphKruskal.h"
//#include <stdlib.h>
//#include <string.h>
//#include "2DLinkedList.h"
//#include "2ArrayBaseStack.h"
//
//int main(void) {
//	ALGraph graph;
//	GraphInit(&graph, 6);
//
//	AddEdge(&graph, A, B, 9);
//	AddEdge(&graph, C, B, 2);
//	AddEdge(&graph, A, C, 12);
//	AddEdge(&graph, A, D, 8);
//	AddEdge(&graph, D, C, 6);
//	AddEdge(&graph, A, F, 11);
//	AddEdge(&graph, F, D, 4);
//	AddEdge(&graph, D, E, 3);
//	AddEdge(&graph, E, C, 7);
//	AddEdge(&graph, F, E, 13);
//
//	ShowGraphEdgeInfo(&graph);
//
//	printf("\n----------------------\n");
//	ConKruskalMST(&graph);
//	ShowGraphEdgeInfo(&graph);
//	printf("\n----------------------\n");
//	ShowVertexWeightInfo(&graph);
//
//
//	GraphDestroy(&graph);
//	return 0;
//}