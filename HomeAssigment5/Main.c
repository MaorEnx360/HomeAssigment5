#include <stdio.h>
#include "BST.h"
#include "TreePrintLibrary.h"

char main() {

	BST tree;
	initBST(&tree);
	insertBST(&tree, 5);
	insertBST(&tree, 8);
	insertBST(&tree, 2);
	insertBST(&tree, 1);	
	insertBST(&tree, 4);
	insertBST(&tree, 9);
	insertBST(&tree, 10);
	insertBST(&tree, 11);

	print_ascii_tree(tree.root);

	printTreeInorder(&tree);
	findIndexNFromLast(&tree, 6);
	destroyBST(&tree);
	return 0;
}
