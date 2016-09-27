node * insert(node * root, int value)
{
    if (root != NULL){
      if (root->right != NULL && root->left !=NULL){
        if (root->data > value)
	  insert (root->left, value);
        else
	  insert(root->right, value);
      }
      else{
        if (root->data > value){
	  if (root->left == NULL){
	    node *temp = new node();
	    temp->data = value;
	    root->left = temp;
	  }
	  else
	    insert(root->left, value);
        }
        else{
	  if (root->right == NULL){
	    node *temp = new node();
	    temp->data = value;
	    root->right = temp;
	  }
	  else
	    insert(root->right, value);
        }
      }
      return root;
    }
    else{
        root = new node();
        root->data = value;
        return root;
    }
}
