

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
bool isSame(TreeNode *tree1,TreeNode *tree2)
{
    if(tree1->val!=tree2->val)
    {
        return false;
    }
    if(tree1->left!=NULL && tree2->left!=NULL)
    {
        return isSame(tree1->left,tree2->left);
    }
    if(tree1->right!=NULL && tree2->right!=NULL)
    {
        return isSame(tree1->right,tree2->right);
    }
    return true;
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
