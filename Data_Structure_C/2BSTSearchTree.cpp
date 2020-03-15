//#include <stdio.h>
//#include <stdlib.h>
//#include "2BinarySearchTree.h"
//#include "2AVLRebalance.h"
//
//void MakeBTSTree(BTree** proot) {
//	*proot = NULL;
//}
//
//BSTData BSTGetData(BTree* bst) {
//	return GetData(bst);
//}
//
//void BSTInsert(BTree** proot, BSTData pdata) {
//	BTree* currentnode = *proot;
//	BTree* parentnode = NULL;
//
//	while (currentnode != NULL) {
//		if (GetData(currentnode) == pdata) {
//			return;
//		}
//
//		else if (GetData(currentnode) > pdata) {
//			parentnode = currentnode;
//			currentnode = GetLeftSub(parentnode);
//		}
//		else {
//			parentnode = currentnode;
//			currentnode = GetRightSub(parentnode);
//		}
//	}
//	BTree* newnode = MakeBinaryTree();
//	SetData(newnode, pdata);
//
//	if (parentnode != NULL) {
//		if (GetData(newnode) > GetData(parentnode)) {
//			MakeRightSub(parentnode, newnode);
//		}
//		else {
//			MakeLeftSub(parentnode, newnode);
//		}
//	}
//	else {
//		*proot = newnode;
//	}
//	*proot = AVLRebalance(proot);
//}
//
//BTree* BSTSearch(BTree* bst, BSTData target) {
//	BTree* currentnode = bst;
//	BTree* parentnode;
//	while (currentnode != NULL) {
//		if (BSTGetData(currentnode) == target) {
//			return currentnode;
//		}
//		else if (BSTGetData(currentnode) > target) {
//			parentnode = currentnode;
//			currentnode = GetLeftSub(currentnode);
//		}
//		else {
//			parentnode = currentnode;
//			currentnode = GetRightSub(currentnode);
//		}
//	}
//
//	if (currentnode == NULL) {
//		printf("못찾았음");
//		exit(-1);
//	}
//
//}
//
//
//BTree* RemoveLeftSub(BTree* bst) {
//	
//	if (bst->left != NULL) {
//		BTree* delnode = NULL;
//		delnode = bst->left;
//		bst->left = NULL;
//		return delnode;
//	}
//	printf("없앨 대상이 없음");
//	return NULL;
//}
//BTree* RemoveRightSub(BTree* bst) {
//
//	if (bst->right != NULL) {
//		BTree* delnode = NULL;
//		delnode = bst->right;
//		bst->right = NULL;
//		return delnode;
//	}
//	printf("없앨 대상이 없음");
//	return NULL;
//}
//
//void ChangeLeftSub(BTree* main, BTree* sub) {
//	main->left = sub;
//}
//void ChangeRightSub(BTree* main, BTree* sub) {
//	main->right = sub;
//}
//
//
//BTree* BSTDelete(BTree** pRoot, BSTData target){
//	BTree* findnode = *pRoot;
//	BTree* PVRoot = MakeBinaryTree();
//	BTree* delnode;
//	BTree* parentnode = PVRoot;
//	ChangeRightSub(PVRoot, *pRoot);
//	while (findnode != NULL&& BSTGetData(findnode) !=target) {
//		if (BSTGetData(findnode) < target) {
//			parentnode = findnode;
//			findnode = GetRightSub(parentnode);
//		}
//		else {
//			parentnode = findnode;
//			findnode = GetLeftSub(parentnode);
//		}
//	}
//	if (findnode == NULL) {
//		return NULL;
//	}
//
//	delnode = findnode;
//	
//
//	if (GetLeftSub(delnode) == NULL && GetRightSub(delnode) == NULL) {
//		if (GetLeftSub(parentnode) == delnode) {
//			RemoveLeftSub(parentnode);
//		}
//		else {
//			RemoveRightSub(parentnode);
//		}
//	}
//
//	else if (GetLeftSub(delnode) == NULL) {
//		if (GetRightSub(parentnode) == NULL) {
//			RemoveLeftSub(parentnode);
//			ChangeLeftSub(parentnode, GetRightSub(delnode));
//		}
//		else {
//			RemoveRightSub(parentnode);
//			ChangeRightSub(parentnode, GetRightSub(delnode));
//		}
//	}
//
//	else if (GetRightSub(delnode) == NULL) {
//		if (GetRightSub(parentnode) == NULL) {
//			RemoveLeftSub(parentnode);
//			ChangeLeftSub(parentnode, GetLeftSub(delnode));
//		}
//		else {
//			RemoveRightSub(parentnode);
//			ChangeRightSub(parentnode, GetLeftSub(delnode));
//		}
//	}
//
//
//	else {
//		BTree* dummynode = GetRightSub(delnode);
//		BTree* dummyparentnode = delnode;
//		BSTData rdata = BSTGetData(delnode);
//		while (GetLeftSub(dummynode) != NULL) {
//			dummyparentnode = dummynode;
//			dummynode = GetLeftSub(dummynode);
//		
//		}
//		int deldata = BSTGetData(delnode);
//		SetData(delnode, BSTGetData(dummynode));
//		delnode = dummynode;
//		if (GetRightSub(dummyparentnode) == dummynode) {
//			ChangeRightSub(dummyparentnode, GetRightSub(dummynode));
//		}
//		else {
//			ChangeLeftSub(dummyparentnode, GetRightSub(dummynode));
//		}
//		
//		
//		SetData(delnode, deldata);
//	
//	}
//	if (*pRoot != GetRightSub(PVRoot)) {
//		*pRoot = GetRightSub(PVRoot);
//	}
//	free(PVRoot);
//	*pRoot = AVLRebalance(pRoot);
//	return delnode;
//}
//
//void BSTShowAll(BTree* bst) {
//	if (bst == NULL) {
//		return;
//	}
//	BSTShowAll(bst->left);
//	printf("%d", BSTGetData(bst));
//	BSTShowAll(bst->right);
//}