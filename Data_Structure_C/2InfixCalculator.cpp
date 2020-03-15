//#include <stdio.h>
//#include "2InfixCalculator.h"
//#include "2InfixtoPostfix.h"
//#include <string.h>
//#include "2ListBaseStack.h"
//#include <ctype.h>
//int Evaluator(char exp[]) {
//	ConvtoRPNExp(exp);
//	Stack stack;
//	StackInit(&stack);
//	
//	char tok;
//	int num1, num2;
//	int explen = strlen(exp);
//	int i;
//	for (i = 0 ; i < explen; i++) {
//		tok = exp[i];
//		if (isdigit(tok)) {
//			SPush(&stack, tok-'0');
//		}
//		else {
//			num2 = SPop(&stack);
//			num1 = SPop(&stack);
//			if (tok == '+') {
//				SPush(&stack, num1 + num2);
//			}
//			else if (tok == '-') {
//				SPush(&stack, num1 - num2);
//			}
//			else if (tok == '*') {
//				SPush(&stack, num1*num2);
//			}
//			else {
//				SPush(&stack, num1 / num2);
//			}
//		}
//	}
//	return SPop(&stack);
//}
