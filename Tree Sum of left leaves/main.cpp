

#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

};



TreeNode* createTreeNode(int val){

    TreeNode* newTreeNode =new TreeNode();
    newTreeNode->val=val;
    newTreeNode->left=newTreeNode->right=nullptr;
    return newTreeNode;
}

TreeNode* Insert(TreeNode* root,int val)
{
    if(root==NULL)
    {
        root=createTreeNode(val);
        return root;
    }
    else if(val<=root->val)
    {
        root->left=Insert(root->left,val);
    }
    else
    {
        root->right=Insert(root->right,val);
    }
    return root;
}
// code in E-olymp incorrect here in printing
int sumLeft(TreeNode *tree) {
    int sum = 0;
    if (tree->left != nullptr) {
        if (tree->left->left == nullptr && tree->left->right == nullptr) {
//      Vertex is a leaf if both its left and right child are NULL

            sum += tree->left->val;
        } else {
            sum += sumLeft(tree->left);
        }
    }

    if(tree->right != nullptr) {
        sum += sumLeft(tree->right);
    }
    return sum;
}



int main()
{

 TreeNode* root=NULL;
 int n;

 cin >> n;

 for(int i=0;i<n;i++)
 {
     int m;
     cin >> m;

    root= Insert(root,m);
 }


 cout << Sum(root);

}

