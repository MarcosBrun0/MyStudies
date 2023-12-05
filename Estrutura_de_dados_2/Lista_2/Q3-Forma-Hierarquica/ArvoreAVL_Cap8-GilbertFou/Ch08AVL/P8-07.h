/* ====================== AVL_Delete ====================== 	This function deletes a node from the tree and 	rebalances it if necessary. 	   Pre    tree initialized--null tree is OK	          dltKey is pointer to key to be deleted 	   Post   node deleted and its space recycled 	          -or- An error code is returned 	   Return Success (true) or Not found (false)*/bool AVL_Delete (AVL_TREE* tree, void* dltKey){//	Local Definitions 	bool  shorter;	bool  success;	NODE* newRoot;//	Statements newRoot = _delete (tree,    tree->root, dltKey,                   &shorter, &success);if (success)   {    tree->root = newRoot;    (tree->count)--;    return true;   } // if else   return false;}  // AVL_Delete 