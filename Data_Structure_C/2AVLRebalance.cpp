//#include <stdio.h>
//#include "2AVLRebalance.h"
//
//BTree* RotateLL(BTree* bst) {
//	BTree* parentnode = bst;
//	BTree* childnode = GetLeftSub(parentnode);
//	ChangeLeftSub(parentnode, GetRightSub(childnode));
//	ChangeRightSub(childnode, parentnode);
//
//	return childnode;
//
//}
//BTree* RotateRR(BTree* bst) {
//	BTree* parentnode = bst;
//	BTree* childnode = GetRightSub(parentnode);
//
//	ChangeRightSub(parentnode, GetLeftSub(childnode));
//	ChangeLeftSub(childnode, parentnode);
//
//	return childnode;
//
//}
//BTree* RotateLR(BTree* bst) {
//	BTree* parentnode = bst;
//	BTree* childnode = GetLeftSub(parentnode);
//	ChangeLeftSub(parentnode, RotateRR(childnode));
//	return RotateLL(parentnode);
//	
//
//}
//BTree* RotateRL(BTree* bst) {
//	BTree* parentnode = bst;
//	BTree* childnode = GetRightSub(parentnode);
//	ChangeRightSub(parentnode, RotateLL(childnode));
//	return RotateRR(parentnode);
//
//
//}
//
//int GetHeight(BTree* bst) {
//	int leftH;
//	int rightH;
//
//	if (bst == NULL) {
//		return 0;
//	}
//
//	leftH = GetHeight(GetLeftSub(bst));
//	rightH = GetHeight(GetRightSub(bst));
//
//	if (leftH > rightH) {
//		return leftH + 1;
//	}
//	else {
//		return rightH+1;
//	}
//}
//int HeightDifference(BTree* bst) {
//	if (bst == NULL) {
//		return 0;
//	}
//	int leftH = GetHeight(GetLeftSub(bst));
//	int rightH = GetHeight(GetRightSub(bst));
//	return leftH - rightH;
//}
//BTree* AVLRebalance(BTree** pRoot) {
//	int height = HeightDifference(*pRoot);
//	if (height >= 2) {
//		if (HeightDifference(GetLeftSub(*pRoot)) > 0) {
//			*pRoot =  RotateLL(*pRoot);
//		}
//		else {
//			*pRoot = RotateLR(*pRoot);
//		}
//	}
//
//	if (height <= -2) {
//		if (HeightDifference(GetRightSub(*pRoot)) > 0) {
//			*pRoot = RotateRR(*pRoot);
//		}
//		else {
//			*pRoot =  RotateRL(*pRoot);
//		}
//	}
//	return *pRoot;
//}
//
