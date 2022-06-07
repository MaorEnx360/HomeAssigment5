#include <stdio.h>
#include "BST.h"
#include "TreePrintLibrary.h"
#define ISEMPTYPTR(a) do {	\
						if (!(a)){	\
						puts("Error");	\
				exit(1); \
						}\
					}while(0)

void recIns(TreeNode** tree, int value);
void recPrint(TreeNode* tree);
void destroyTree(TreeNode* tree);
int Idx(TreeNode* tree, int N);
void initBST(BST* bst) {
	bst->root = NULL;
}
void insertBST(BST* bst, int value) {
	recIns(&bst->root, value);
}

void recIns(TreeNode** tree, int value) {
	if (*(tree) == NULL) {
		(*tree) = (TreeNode*)malloc(sizeof(TreeNode));
		ISEMPTYPTR((*tree));
		(*tree)->element = value;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
	}
	else {
		if (value <= (*tree)->element) {
			recIns(&(*tree)->left, value);
		}
		else {
			recIns(&(*tree)->right, value);
		}
	}

}
void printTreeInorder(BST* bst) {
	recPrint(bst->root);
}
void recPrint(TreeNode* tree) {
	if(tree!=NULL){
		recPrint(tree->left);
		printf("%d,", tree->element);
		recPrint(tree->right);
	}
}

void destroyBST(BST* bst) {
	destroyTree(bst->root);
}
void destroyTree(TreeNode* tree) {
	if (tree != NULL) {
		tree->element = 0;
		destroyTree(tree->left);
		destroyTree(tree->right);
	}
	free(tree);
	}
int findIndexNFromLast(BST* bst, int N) {
	return Idx(bst->root, N);
}
int Idx(TreeNode* tree) {
	if (tree->right == NULL && tree->left == NULL) {
		return tree->element;
	}
	else if (tree->right != NULL) {
		return Idx(tree->right);
	}	
	else {
		return Idx(tree->left);
	}
}

