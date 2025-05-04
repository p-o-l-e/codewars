// https://www.codewars.com/kata/5800580f8f7ddaea13000025/cpp

struct node
{
  int value;
  node* left;
  node* right;
};

int sumTheTreeValues(node* root) 
{
  return root? root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right): 0;
}
