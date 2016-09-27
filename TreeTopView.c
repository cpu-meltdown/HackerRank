/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
  if (root != NULL){
    top_view(root->left);
    if (root->left != NULL || root->right != NULL)
      printf("%d ", root->data);
    top_view(root->right);
  }
}
