//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//#include "2InfixtoPostfix.h"
//#include "2ListBaseStack.h"
//
//int GetopPrec(char op) {
//	if (op == '*' || op == '/') {
//		return 5;
//	}
//	else if (op == '+' || op == '-') {
//		return 3;
//	}
//	else if (op == '(') {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}
//
//int WhoPrecop(char op1, char op2) {
//	int op1prec = GetopPrec(op1);
//	int op2prec = GetopPrec(op2);
//
//	if (op1prec < op2prec) {
//		return 1;
//	}
//	else if (op1prec > op2prec) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void ConvtoRPNExp(char exp[]) {
//	Stack stack;
//	StackInit(&stack);	
//	char findop, tok;
//	int explen = strlen(exp);
//	char *convexp = (char*)malloc(explen+1);
//	memset(convexp, 0, sizeof(char)*explen+1);
//	int i, idx=0;
//	for (i = 0; i < explen; i++) {
//		tok = exp[i];
//		if (isdigit(tok)) {
//			convexp[idx++] = tok;
//		}
//		else {
//			if (tok == '(') {
//				SPush(&stack, tok);
//			}
//			else if (tok == ')') {
//				while (1) {
//					findop = SPop(&stack);
//					if (findop == '(') {
//						break;
//					}
//					convexp[idx++] = findop;
//				}
//
//			}
//			else if (tok == '+' || tok == '-' || tok == '*' || tok == '/') {
//				if (SIsEmpty(&stack)) {
//					SPush(&stack, tok);
//				}
//				else {
//					while (!SIsEmpty(&stack)) {
//						if (WhoPrecop(SPeek(&stack), tok) <= 0) {
//							convexp[idx++] = SPop(&stack);
//							if (SIsEmpty(&stack)) {
//								SPush(&stack, tok);
//								break;
//							}
//						}
//						else {
//							SPush(&stack, tok);
//							break;
//						}
//					}
//				}
//				
//			}
//			else {
//				printf("이상한거잇음");
//				return;
//			}
//
//		}
//	}
//	while (!SIsEmpty(&stack)) {
//		convexp[idx++] = SPop(&stack);
//	}
//
//	strcpy_s(exp, strlen(convexp)+1, convexp);
//	free(convexp);
//}
