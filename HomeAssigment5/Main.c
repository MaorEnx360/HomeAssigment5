#include <stdio.h>
#include "BST.h"
#include "TreePrintLibrary.h"

char main() {

	BST tree;
	initBST(&tree);
	print_ascii_tree(tree.root);
	printf("\n");
	printTreeInorder(&tree);
	printf("\n");
	printf("the same level ? = %d \n",sameHeightLeaves(&tree));
	//
	insertBST(&tree, 5);
	insertBST(&tree, 8);
	insertBST(&tree, 2);
	print_ascii_tree(tree.root);
	printf("\n");
	printTreeInorder(&tree);
	printf("\n");
	printf("the same level ? = %d \n", sameHeightLeaves(&tree));
	insertBST(&tree, 1);	
	insertBST(&tree, 4);
	insertBST(&tree, 8);
	insertBST(&tree, 9);
	insertBST(&tree, 1);
	print_ascii_tree(tree.root);
	printf("\n");
	printTreeInorder(&tree);
	printf("\n");
	printf("the same level ? = %d \n", sameHeightLeaves(&tree));
	insertBST(&tree, 2);
	insertBST(&tree, 5);
	insertBST(&tree, 8);
	insertBST(&tree, 9);
	print_ascii_tree(tree.root);
	printf("\n");
	printTreeInorder(&tree);
	printf("\n");
	printf("the same level ? = %d \n", sameHeightLeaves(&tree));
	destroyBST(&tree);
	return 0;
}
