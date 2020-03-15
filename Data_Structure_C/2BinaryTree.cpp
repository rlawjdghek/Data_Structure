//#include <stdio.h>
//#include <stdlib.h>
//#include "2BinaryTree.h"
//
//
//BTree* MakeBinaryTree() {
//	BTree* newtree = (BTree*)malloc(sizeof(BTree));
//	newtree->left = NULL;
//	newtree->right = NULL;
//	return newtree;
//}
//int GetData(BTree* bt) {
//	return bt->data;
//}
//void SetData(BTree* bt, BTData data) {
//	bt->data = data;
//}
//void MakeLeftSub(BTree* main, BTree* sub) {
//	if (main->left != NULL) {
//		free(main->left);
//	}
//
//	main->left = sub;
//}
//void MakeRightSub(BTree* main, BTree* sub) {
//	if (main->right != NULL) {
//		free(main->right);
//	}
//
//	main->right = sub;
//}
//BTree* GetLeftSub(BTree* bt) {
//	return bt->left;
//}
//BTree* GetRightSub(BTree* bt){
//	return bt->right;
//}
//void DeleteTree(BTree* bt) {
//	if (bt == NULL) {
//		return;
//	}
//
//	DeleteTree(bt->left);
//	DeleteTree(bt->right);
//
//	printf("%d »èÁ¦", bt->data);
//	free(bt);
//
//
//}
