//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#include "2ExpressionTree.h"
//#include "2ListBaseStack.h"
//
//
//BTree* MakeExpreesionTree(char exp[]) {
//	BTree* newtree = (BTree*)malloc(sizeof(BTree));
//	Stack stack;
//	BTree pnode = (BTree*)malloc(sizeof(BTree));
//	StackInit(&stack);
//	int i;
//	int explen = strlen(exp);
//	char tok;
//	for (i = 0; i < explen; i++) {
//		tok = exp[i];
//		if (isdigit(tok)) {
//			SetData(&pnode, tok);
//		}
//		else {
//			MakeRightSub(newtree, SPop(&stack));
//			MakeLeftSub(newtree, SPop(&stack));
//			SetData(newtree, tok);
//		}
//		SPush(&stack, newtree);
//	}
//	return SPop(&stack);
//
//
//}
//int EvaluateTree(BTree* bt) {
//	int op1, op2;
//	op1 = EvaluateTree(GetLeftSub(bt));
//	op2 = EvaluateTree(GetRightSub(bt));
//	switch (GetData(bt)) {
//	case '+':return op1 + op2;
//	case '-':return op1 - op2;
//	case '*': return op1 * op2;
//	case '/': return op1 / op2;
//	}
//	
//
//}
