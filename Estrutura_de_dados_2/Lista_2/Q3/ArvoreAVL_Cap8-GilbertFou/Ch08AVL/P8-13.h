/*	=================== _traversal =================== 	Inorder tree traversal. To process a node, we use 	the function passed when traversal was called.	   Pre   Tree has been created (may be null) 	   Post  All nodes processed */void _traversal (NODE* root,                  void (*process) (void* dataPtr)){//	Statements if  (root)    {     _traversal  (root->left, process);     process     (root->dataPtr);     _traversal  (root->right, process);    } // if return;}  // _traversal 